#!/bin/bash

random=$(echo $[ $RANDOM % 3 + 1 ])
echo "Hello, I will start pushing $random times to Github"
valid=true

while [ $valid ]
do
echo $count

pwd=/mnt/d/Github/Projects/tests
echo "Preparing to write to Github...
Setting pwd to $pwd."

cd $pwd

uptime | tee -a simple_login.sh

git add .
git commit -m "automation process"
git push

if [ $count -eq $random ];
then break
fi
((count++))
done
