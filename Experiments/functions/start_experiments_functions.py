import sys
import os
import re

def cmp(a,b):
	digit_a = re.search("\d+",a)
	digit_b = re.search("\d+",b)
	return int(digit_a.group(0)) - int(digit_b.group(0))

def sort_files(files):
	files.sort(cmp)
	return files

def traverse(path, lav_path, cbmc_path, clang_path):
    for (curr_folder , sub_folder , files) in os.walk(path):
		if curr_folder.find("Output") == -1:
			print curr_folder
			curr_folder = curr_folder.replace(" ", "\\ ")
			output_folder = os.path.join(curr_folder, "Output")
			mkdir_instruction = "mkdir "+ output_folder
			print "...making Output folder if not exists"
			os.system(mkdir_instruction)
			rez_file_lav =  os.path.join(output_folder, "lav_rez.txt")
			rez_file_cbmc =  os.path.join(output_folder, "cbmc_rez.txt")
			mv_rez_file_lav = "mv "+rez_file_lav+" "+rez_file_lav+".bak"
			mv_rez_file_cbmc = "mv "+rez_file_cbmc+" "+rez_file_cbmc+".bak"
			#print rm_rez_file_lav
			#print rm_rez_file_cbmc
			print "...saving backup results CBMC"
			os.system(mv_rez_file_cbmc)
			print "...saving backup results LAV"
			os.system(mv_rez_file_lav)
			files = sort_files(files)
			cbmc_ind = True
			for file in files:
				abs_file = os.path.abspath(os.path.join(curr_folder,file))
				if abs_file.endswith(".c") == True:

					abs_file_obj = abs_file.replace(".c",".o")
					clang_instruction = clang_path + " -c -g -emit-llvm " + abs_file + " -o "+ abs_file_obj
					lav_instruction = 'timeout 400 /usr/bin/time -f "'+ file +' %e" -o '+ rez_file_lav +' --quiet -a ' + lav_path + ' '+ abs_file_obj +' -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel >/dev/null 2>/dev/null'
					cbmc_instruction = 'timeout 400 /usr/bin/time -f "'+ file +' %e" -o '+ rez_file_cbmc +' --quiet -a ' + cbmc_path + ' --div-by-zero-check --64 '+ abs_file +' >/dev/null 2>/dev/null'
					rm_instruction = "rm -f "+abs_file_obj

					print "=====  file - " + abs_file + "  ====="

					print "...starting Clang"
					os.system(clang_instruction)

					print "...starting LAV-a on obj file"
					#print lav_instruction
					status = os.system(lav_instruction)
					# If timeout happens, print timeout
					if(os.WEXITSTATUS(status) == 124):
						os.system('echo "timeout" >> ' + rez_file_lav)

					# If timeout happens, print timeout and stop further execution
					if(cbmc_ind == True):
						print "...starting CBMC on source code"
						status = os.system(cbmc_instruction)
						if(os.WEXITSTATUS(status) == 124):
							cbmc_ind = False
							os.system('echo "timeout" >> ' + rez_file_cbmc)

					print "...removing obj file"
					os.system(rm_instruction)
			print "...results are in Output/lav_rez.txt and Output/cbmc_rez.txt files\n"

start_folder = os.path.abspath(raw_input("Enter starting folder:\n"))
lav_path = os.path.abspath(raw_input("Enter path for LAV executable:\n"))
cbmc_path = os.path.abspath(raw_input("Enter path for CBMC executable:\n"))
clang_path = os.path.abspath(raw_input("Enter path for Clang executable:\n"))

traverse(start_folder, lav_path, cbmc_path, clang_path)
