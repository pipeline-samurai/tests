#!/bin/bash

random=$(echo $[ $RANDOM % 12 + 4 ])
valid=true

while [ $valid ]
do
echo $count

if [ $count -eq $random ];
then break
fi
((count++))
done
