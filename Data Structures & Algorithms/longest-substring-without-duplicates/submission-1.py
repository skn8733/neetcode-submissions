class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # better approach is just sliding window 
        start = 0 # start  of window
        max_len = 0 # end of window
        set_char = set() # this is the window K 


        for end in range(len(s)): 
            while s[end] in set_char: # checking to change window
                set_char.remove(s[start])
                start += 1

            set_char.add(s[end]) # change window
            max_len = max(max_len, end-start+1) #updating
        return max_len
                


        