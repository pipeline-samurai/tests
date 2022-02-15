#!/bin/bash
#this program counts to 5 then stops using an if statement
valid=true
count=1
while [ $valid ]
do
echo $count
if [ $count -eq 5 ];
then
break
fi
((count++))
done
