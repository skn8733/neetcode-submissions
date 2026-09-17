class Solution:
    def isPalindrome(self, s: str) -> bool:
       # preprocess the string
       s = s.lower()
       s = ''.join([char for char in s if char.isalnum()])
       return s == s[::-1]


        