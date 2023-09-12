#!/bin/bash

echo "What is your name?"
read name
echo "How old are you?"
read age
echo "You are $name. You are $age years old."
sleep 4

getrichby=$((( $RANDOM % 15 ) + $age )) 


echo "Calculating..."
sleep 2
echo "....."
sleep 2
echo "...."
sleep 2
echo "..."
sleep 2
echo ".."
sleep 2
echo "."
sleep 2 
echo "Calculated Successfully!!"
sleep 4


echo "Congratulations $name!! You will become a millionaire by $getrichby." 

