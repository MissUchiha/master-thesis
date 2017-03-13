#!/bin/bash

echo "-----LAV 32 started-----"
sh test_lav_32b.sh "results/lav-32b-results/lav_32b.txt" "./LAV"
echo "-----LAV 32 ended-------"
echo "-----LAV 64 started-----"
sh test_lav_64b.sh "results/lav-64b-results/lav_64b.txt" "./LAV"
echo "-----LAV 64 ended-------"
echo "-----CBMC 32 started----"
sh test_cbmc_32b.sh "results/cbmc-32b-results/cbmc_32b.txt" "./CBMC"
echo "-----CBMC 32 ended------"
echo "-----CBMC 64 started----"
sh test_cbmc_64b.sh "results/cbmc-64b-results/cbmc_64b.txt" "./CBMC"
echo "-----CBMC 64 ended------"
