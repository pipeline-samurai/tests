# This is the fifth homework in variables section in the udemy_m4csup

#defining
num1, num2 = map(int, input().split())
print("Before swap: ", num1, num2)
num3 = num2
num2 = num1
num1 = num3

print("After swap: ", num1, num2)