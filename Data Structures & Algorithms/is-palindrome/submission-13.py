class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered_s = s.replace(" ","").lower()
        left = 0
        right = len(filtered_s)-1
        while left < right:
            while left < right and not filtered_s[left].isalnum():
                left += 1
            while right > left and not filtered_s[right].isalnum():
                right-=1
            if filtered_s[left] != filtered_s[right]:
                return False
            left += 1
            right -= 1
        return True
        