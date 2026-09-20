class Solution:
    '''
    zxyzxyz 

    '''
    def lengthOfLongestSubstring(self, s: str) -> int:

        lower = 0
        maxSubset = 0
        for r in range(len(s)):
            window = s[lower:r]
            while lower < r and s[r] in window:
                lower+=1
                window = s[lower:r]

            maxSubset = max(maxSubset, len(window)+1)
        return maxSubset

        