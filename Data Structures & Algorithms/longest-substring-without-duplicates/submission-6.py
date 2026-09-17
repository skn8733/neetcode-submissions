class Solution:
    # "zxyzxyz" ==> temp = z,zx, zxy, (skip)zxyz,x; contaier = [z,zx, zxy, zxyz, x] (skip zxyz b/c z)
    # .. ideally soidn this will go though all the possibel substrings and removes the moves that are duplicates
    # this takes way to long of an approach

    # longest substring, means longest window of the string to look so 
    #"zxyzxyz", i = z; then we can have a consition where joes until we get before repeat ( initial window)
    # then we move through this window while j < length and cases where if repeat we move i++

    def lengthOfLongestSubstring(self, s: str) -> int:
        ## find initial window 
        st = 0
        maxValue = 0
        for en in range(len(s)):
            while s[en] in s[st:en]:
                st+=1
            maxValue = max(maxValue,len(s[st:en]) + 1)
        return maxValue

                


        