# This is the third homework in variables section in the udemy_m4csup

# defining user input
#n1, n2, n3, n4, n5, n6, n7, n8 = [int(x) for x in input("Enter eight values: ").split()]
n1, n2, n3, n4, n5, n6, n7, n8 = map(int, input().split())
# defining math
sum_even = n2 + n4 + n6 + n8
sum_odd = n1 + n3 + n5 + n7

# defining output
print(sum_even, sum_odd)
