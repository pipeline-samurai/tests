#!/bin/bash

echo "Do you want to hear a story?"
read input_start

if [ $input_start == "yes" ];
then
echo "Awesome, I am learning bash scripting in an active manner"
#sleep 2
echo "So here I am writing some scripts from my head trying to improve"
#sleep 2
echo "And I would like to showcase my skills by helping you"
#sleep 2
echo "Let's help you transform seconds into minutes. Pass me a number of seconds:"

read seconds
#let minutes="$seconds/60" 
#echo "scale=2; $seconds/60"|bc
minutes=$(awk "BEGIN {print $seconds/60}")

echo "Your total number of minutes is : $minutes"
#sleep 2
echo "Is there something else I can help you with?"
read input_continue

if [ $input_continue == "yes" ];
then


else
echo "I totally understand, have a lovely day!"
fi
