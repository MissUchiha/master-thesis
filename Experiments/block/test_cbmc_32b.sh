#!/bin/bash

/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/12_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/13_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/14_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/15_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/16_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/17_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/18_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/19_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/20_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/21_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/22_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/23_lines.c >/dev/null 2>/dev/null
/usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/24_lines.c >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/25_lines.c >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/26_lines.c >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/27_lines.c >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/28_lines.c  >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/29_lines.c  >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/30_lines.c  >/dev/null 2>/dev/null
timeout 360 /usr/bin/time -f "%e" -o $1 --quiet -a $2 --div-by-zero-check --32 --function m sources/60_lines.c  >/dev/null 2>/dev/null

