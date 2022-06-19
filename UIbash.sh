#!/bin/bash                   

# g++ userInterface.cpp -o userInterface
# ./userInterface.out > userFlagValue.txt

BYellow='\033[1;33m'
On_IRed='\033[0;101m'
Green='\033[0;32m'
NC='\033[0m'
On_IWhite='\033[0;107m'

printf "${BYellow}"
echo "----------------------------------------------MENU---------------------------------------------------"
echo "1 . n given, n limits given, array of n rand ints in bounds (also given)"
echo "2 . n given, n limits given, array of n rand ints in bounds (also given) and all are unique"
echo "3 . n given, n limits given, array of n rand ints in bounds (also given) and permutation"
echo "4 . n given, which is the size of string , generate  str [n]"
echo "5 . n given, which is the size of string , generate  binary str [n]"
echo "6 . n given, which is the size of string , generate  str [n] with set of allowed values given"
echo "7 . n given, generate (n-1) digit number"
echo "-----------------------------------------------------------------------------------------------------"

printf "${BYellow}Enter the number of your choice ${NC}"
read flag
    
echo "$flag" > userFlagValue.txt

g++ efficient.cpp -o efficient.out
g++ brute.cpp -o brute.out
g++ testGeneratorFinal.cpp -o gen.out

for((i = 0; ;i++))
do

    ./gen.out < userFlagValue.txt > test.txt

    ./efficient.out < test.txt > correct.txt
    ./brute.out < test.txt > myAnswer.txt

    diff -u correct.txt myAnswer.txt || break;

    printf "${Green} Test $i successfully ran. ${NC}\n"

    # echo -n "Currently running " 
    # echo -n $i 
    # echo "th test"
done