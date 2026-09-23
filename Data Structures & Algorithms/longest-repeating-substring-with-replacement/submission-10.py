class Solution:
    '''
    AAABABB ==>
    substring_L = maxfeq + k ==> substring_L - max = k
    if  substring_L - max > k: alpha[s[l]] -= 1, then l += 1
    '''
    def characterReplacement(self, s: str, k: int) -> int:
        freqAlpha = [0]*26
        l = 0
        longest = 0
        for r in range(len(s)):
            charVal = ord(s[r]) - ord('A')
            freqAlpha[charVal] += 1
            currentMax = max(freqAlpha)
            currLength = r-l + 1
            if currLength - currentMax > k:
                freqAlpha[ord(s[l]) - ord('A')]-=1
                l+=1
            longest = max(longest, r-l + 1)

        return longest


        
     

            




            


        


        