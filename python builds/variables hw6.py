# This is the sixth homework in variables section in the udemy_m4csup

# defining user input
num1, num2, num3 = map(int, input().split())
# verifying user input
print("Before swap: ", num1, num2, num3)

# defining variables and swap logic
num4 = num1
num1 = num2
num2 = num3
num3 = num4

#defining output
print("After swap:", num1, num2, num3)

#This was one of the more interesting homeworks