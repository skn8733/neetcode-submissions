class Solution:
    '''
    zxyzxyz 

    '''
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        lower = 0
        maxSubset = 0
        for r in range(len(s)):
            while s[r] in charSet:
                charSet.remove(s[lower])
                lower+=1
            charSet.add(s[r])
            window = s[lower:r]
            maxSubset = max(maxSubset, len(window)+1)
        return maxSubset

        