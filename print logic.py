# Write a program that reads 2 integers A, B
# If B is -1, print 2*A+1
# If B is 1, print A*A

a, b = map(int, input().split())

# formulas for the possible results

eq_is_1 = a * a
eq_is_neg_1 = 2 * a + 1

is_1 = (b +1) / 2
is_neg_1 = 1 - is_1

ans = is_1 * eq_is_1 + is_neg_1 * eq_is_neg_1

print(ans)