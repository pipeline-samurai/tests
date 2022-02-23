#!/bin/bash

echo "Enter username"
read username
echo "Enter password"
read password

if [[ ( $username == "admin" && $password == "secret" ) ]]; then
echo "valid user"
else
echo "invalid user"
fi
 14:22:10 up 3 days, 18:24,  0 users,  load average: 0.05, 0.01, 0.00
 14:22:12 up 3 days, 18:24,  0 users,  load average: 0.05, 0.01, 0.00
 14:22:15 up 3 days, 18:24,  0 users,  load average: 0.05, 0.01, 0.00
