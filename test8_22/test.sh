#!/usr/bin/bash 


count=0
while [ $count -le 100 ]
do 
  echo "hello world $count"
  let count++
  sleep 1
done
