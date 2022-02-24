#!/bin/bash

random=$(echo $[ $RANDOM % 7 + 6 ])
echo
echo "Hello, I will start pushing $random times to Github"
sleep 2

valid=true
count=1
while [ $valid ]
do
echo
echo $count

#pwd=/mnt/d/Github/Projects/tests

echo
"Preparing to write to Github..."
#Setting pwd to $pwd"
sleep 2
#cd $pwd
echo

uptime | tee -a function.py
sleep 2

echo
git add .
git commit -m "automation process"
git push
echo
if [ $count -eq $random ];
then break
fi
((count++))
done
