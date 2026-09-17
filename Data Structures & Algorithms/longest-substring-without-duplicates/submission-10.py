class Solution:
    # "zxyzxyz" ==> temp = z,zx, zxy, (skip)zxyz,x; contaier = [z,zx, zxy, zxyz, x] (skip zxyz b/c z)
    # .. ideally soidn this will go though all the possibel substrings and removes the moves that are duplicates
    # this takes way to long of an approach

    # longest substring, means longest window of the string to look so 
    #"zxyzxyz", i = z; then we can have a consition where joes until we get before repeat ( initial window)
    # then we move through this window while j < length and cases where if repeat we move i++

    def lengthOfLongestSubstring(self, s: str) -> int:
        ## find initial window 
        start = 0
        maxValue = 0
        lastOccurance = {}
        for end in range(len(s)):
            if s[end] in lastOccurance:
                start = max(lastOccurance[s[end]] + 1, start)
            lastOccurance[s[end]] = end
            maxValue = max(end-start +1, maxValue)
        return maxValue

                


        