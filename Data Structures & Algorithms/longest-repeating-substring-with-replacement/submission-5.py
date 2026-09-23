class Solution:
    '''
    Approach is brute force entire string O(n^2):
      - looking for substring, how do we know it is valid?
      -  ( replace the character <= k) so character with low frequeny to replace
    
    Li  = mf + k + 1
    li - mfc +1 > k we know that l += 1


    '''
    def characterReplacement(self, s: str, k: int) -> int:
        
        alphaFreq = [0]*26
        l = 0
        maxFreq = 0
        output = 0
        for r in range(len(s)):
            alphaFreq[ord(s[r]) - ord('A')] += 1
            maxFreq = max(maxFreq, alphaFreq[ord(s[r]) - ord('A')])
            currentLen = r-l + 1
            if currentLen - maxFreq > k:
                alphaFreq[ord(s[l]) - ord('A')] -= 1
                l+=1
            output = max(output, r-l+1)
        return output

            




            


        


        