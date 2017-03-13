import sys
import os
import re
# ========================= NIVO 1 ==========================================
def make_functions_nivo_1(dat, br_n, br_f):
    for fun in range(1,br_f+1):
    # function start
        dat.write("int f"+str(fun)+"(int a, int b, int c) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # fucntion end
        dat.write(""" if(c!=0)
   return a/c;
 return a+b;
}

""")
    # main function
    dat.write("""int main() {
 int a, b, c, r = 0;
 scanf("%d%d%d", &a, &b, &c);
""")
    # function call
    for fun in range(1, br_f+1):
        dat.write(""" r += f"""+str(fun)+"""(a,b,c);
""")
    dat.write(""" return r;
}
""")

# ========================= END NIVO 1 ==========================================

# ========================= NIVO 2 ==========================================
def make_functions_nivo_2(dat, br_n, br_f):
    for fun in range(1,br_f+1):
    # function start
        dat.write("int _f"+str(fun)+"(int a, int b, int c) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # function end
        dat.write(""" if(c!=0)
   return a/c;
 return a+b+c;
}

""")
    # start of _ function
        dat.write("int f"+str(fun)+"(int a, int b, int c) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # end of _ function
        dat.write(""" if(c!=0)
   return a/c + _f"""+str(fun)+"""(a,b,c);
 return a+b+c;
}

""")

    # main function
    dat.write("""int main() {
 int a, b, c, r = 0;
 scanf("%d%d%d", &a, &b, &c);
""")
    # function call
    for fun in range(1, br_f+1):
        dat.write(""" r += f"""+str(fun)+"""(a,b,c);
""")
    dat.write(""" return r;
}
""")

# ========================= END NIVO 2 ==========================================

# ========================= NIVO 1T ==========================================
def make_functions_nivo_1T(dat, br_n, br_f):
    for fun in range(1,br_f+1):
    # function start
        dat.write("int f"+str(fun)+"(int a, int b) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # function end
        dat.write(""" if(b!=0)
   return a/b;
 return a+b;
}

""")
    # main function
    dat.write("""int main() {
 int a, b, r = 0;
 scanf("%d%d", &a, &b);
""")
    # function call
    for fun in range(1, br_f+1):
        dat.write(""" r += f"""+str(fun)+"""(a,b);
""")
    dat.write(""" return r;
}
""")

# ========================= END NIVO 1T ==========================================


# ========================= NIVO 2T ==========================================
def make_functions_nivo_2T(dat, br_n, br_f):
    for fun in range(1,br_f+1):
    # function start
        dat.write("int _f"+str(fun)+"(int a, int b, int c) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # function end
        dat.write(""" if(b!=0)
   return a/b;
 return a+b+c;
}

""")
    # start of _ function
        dat.write("int f"+str(fun)+"(int a, int b, int c) {\n")
        for nar in range(1,br_n+1):
            dat.write(""" a = (b<<1)*((a>>1)/3);
 b = (a<<1)*((b>>1)/3);
""")
    # end of _ function
        dat.write(""" if(b!=0)
   return a/b + _f"""+str(fun)+"""(a,b,c);
 return a+b+c;
}

""")

    # main function
    dat.write("""int main() {
 int a, b, c, r = 0;
 scanf("%d%d%d", &a, &b, &c);
""")
    # function call
    for fun in range(1, br_f+1):
        dat.write(""" r += f"""+str(fun)+"""(a,b,c);
""")
    dat.write(""" return r;
}
""")

# ========================= END NIVO 2T ==========================================


br_fun = [1,5,10,15,20,25,30,35,40,41,42,43,44,45,46,47,48,49,50]
br_fun_all = range(1,51)

nivo = raw_input("Enter nivo (nivo_1, nivo_1T, nivo_2, nivo_2T):\n")
# 1.
# br_instruction = int(raw_input("Enter number of instructions:\n"))
folder = raw_input("Enter folder path:\n")

# 2.
for br_instruction in range(1,11):
    for br_f in br_fun_all:
        # 3.
        # open_file = open(os.path.join(os.path.abspath(folder),"f"+str(br_f)+".c"), "a+")
        path_folder = os.path.join(os.path.abspath(folder.replace(" ", "\\ ")), "D"+str(br_instruction))
        open_file = open(os.path.join(path_folder,"f"+str(br_f)+".c"), "a+")

        open_file.write("#include <stdio.h>\n\n")
        if nivo == "nivo_1":
            make_functions_nivo_1(open_file, br_instruction, br_f)
        elif nivo == "nivo_2":
            make_functions_nivo_2(open_file, br_instruction, br_f)
        elif nivo == "nivo_1T":
            make_functions_nivo_1T(open_file, br_instruction, br_f)
        elif nivo == "nivo_2T":
            make_functions_nivo_2T(open_file, br_instruction, br_f)
        else:
            print "Error, nivo must be in set (nivo_1, nivo_1T, nivo_2, nivo_2T)"
