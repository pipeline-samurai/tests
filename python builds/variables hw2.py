# This is the second homework in variables section in the udemy_m4csup

# defining user input
x1 = input("Enter the first student's name : ")
y1 = int(input("Enter the first student's ID : "))
z1 = float(input("Enter the first student's grade: "))

x2 = input("Enter the second student's name : ")
y2 = int(input("Enter the second student's ID : "))
z2 = float(input("Enter the second student's grade: "))

# defining math variables
average = (z1+z2)/2
# defining output

print('Information for students and their "Math" grades')
print(x1, "(ID", y1, ")", "got grade:", z1)
print(x2, "(ID", y2, ")", "got grade:", z2)
print("Average math grade is: ", average)
