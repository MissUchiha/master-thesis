#!/bin/bash

#/usr/bin/time -f "12_lines.c  -  %e seconds" -o lav_64b.txt --quiet -a ../../Release+Asserts/bin/LAV object64/12_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null 
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/12_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null 
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/13_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/14_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/15_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/16_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/17_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/18_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/19_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/20_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/21_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/22_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/23_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/24_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/25_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/26_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/27_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/28_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/29_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/30_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 object64/60_lines.o -solver=Z3-BV-ARR-EUF -find-first-flawed -enable-parallel -starting-function=m >/dev/null 2>/dev/null
