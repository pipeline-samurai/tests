# This is the second homework in variables section in the udemy_m4csup

# defining user input
name1 = input("Enter the first student's name : ")
id1 = (input("Enter the first student's ID : "))
grade1 = float(input("Enter the first student's grade: "))

name2 = input("Enter the second student's name : ")
id2 = (input("Enter the second student's ID : "))
grade2 = float(input("Enter the second student's grade: "))

# defining math variables
average = (grade1 + grade2)/2
# defining output

print('Information for students and their "Math" grades')
#print(name1, "(ID", id1, ")", "got grade:", grade1)
msg = name1 + '(ID ' + id1 + ') got grade: ' + str(grade1)
print(msg)
#print(name2, "(ID", id2, ")", "got grade:", grade2)
msg = name2 + '(ID ' + id2 + ') got grade: ' + str(grade2)
print(msg)

print("Average math grade is: ", average)
