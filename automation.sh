#!/bin/bash

random=$(echo $[ $RANDOM % 3 + 1 ])
echo "Hello, I will start pushing $random times to Github"
sleep 2

valid=true
count=1
while [ $valid ]
do
echo $count

pwd=/mnt/d/Github/Projects/tests
echo "Preparing to write to Github...
Setting pwd to $pwd."
sleep 2
cd $pwd

uptime | tee -a counter.sh
sleep 2

git add .
git commit -m "automation process"
git push

if [ $count -eq $random ];
then break
fi
((count++))
done
