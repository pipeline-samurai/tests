class Solution:
    def is_palindrome(self, user_input):

        user_input = input("Welcome to my palindrome")
        string_len = len(user_input)

        if string_len <= 1:
            return True

        for i in range(0, int(string_len / 2)):

            if user_input[i].upper() != user_input[string_len - i - 1].upper():

                return False

        return True