class Solution:
    # "zxyzxyz" ==> temp = z,zx, zxy, (skip)zxyz,x; contaier = [z,zx, zxy, zxyz, x] (skip zxyz b/c z)
    # .. ideally soidn this will go though all the possibel substrings and removes the moves that are duplicates
    # this takes way to long of an approach

    # longest substring, means longest window of the string to look so 
    #"zxyzxyz", i = z; then we can have a consition where joes until we get before repeat ( initial window)
    # then we move through this window while j < length and cases where if repeat we move i++

    def lengthOfLongestSubstring(self, s: str) -> int:
        ## find initial window 
        i = 0
        j = 1
        while(j < len(s) and s[j] not in s[i:j]):
            j+=1
        maxValue = len(s[i:j])

        # adjusting window
        while(j < len(s)):
            while(s[j] in s[i:j]):
                i+=1
            j+=1
            maxValue = max(maxValue,len(s[i:j]))
        return maxValue

                


        