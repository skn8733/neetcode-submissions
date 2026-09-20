class Solution:
    '''
    zxyzxyz 

    '''
    def lengthOfLongestSubstring(self, s: str) -> int:

        lower = 0
        maxSubset = 0
        for r in range(len(s)):
            while lower < r and s[r] in s[lower:r]:
                lower+=1
            
            window = s[lower:r]
            maxSubset = max(maxSubset, len(window)+1)
        return maxSubset

        