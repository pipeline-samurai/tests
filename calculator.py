print("Welcome to my personal calculator\nPlease input two numbers and an operator:")

user_input1 = int(input("First number:\n"))
user_input2 = int(input("Second number:\n"))
user_input3 = input("Operation(add,substract,multiply, divide or raise to power:\n")
math_add = "add"
math_substract = "substract"
math_multiply = "multiply"
math_divide = "divide"
math_raise_to_power = "raise to power"
exit = "quit"

if user_input3 == math_add:
    print(user_input1 + user_input2)
if user_input3 == math_substract:
    print(user_input1 - user_input2)
if user_input3 == math_multiply:
    print(user_input1 * user_input2)
if user_input3 == math_divide:
    print(user_input1 / user_input2)
if user_input3 == math_raise_to_power:
    print(user_input1**user_input2)
#if user_input3 is exit:
    


