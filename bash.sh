#!/bin/bash

make clean
make

rm -f rapport_test.txt
touch rapport_test.txt

valid=0
cmpt=0
result=-1
state=""
arr=()

for dir in test/*
do
    for file in $dir/*
    do
        ./bin/tpcas < $file
        result=$?
        echo "$file : $result" >> rapport_test.txt
        if [ $result -eq 0 ]
        then
            state="SUCCESS"
            ((valid=valid+1))
        else
            state="FAILURE"
        fi
        arr+=($state": test sur le fichier" $file)
        ((cmpt=cmpt+1))
    done
done



echo >> rapport_test.txt
echo >> rapport_test.txt 
echo ====================== >> rapport_test.txt
echo ===== Resultats ====== >> rapport_test.txt
echo ====================== >> rapport_test.txt
echo >> rapport_test.txt
echo fichiers valides: $valid >> rapport_test.txt
echo fichier non valides: $(($cmpt-$valid))>> rapport_test.txt
echo Nombre de fichiers lus: $cmpt >> rapport_test.txt
echo 
for i in ${!arr[@]}; 
do
  echo ${arr[$i]}
done
echo
