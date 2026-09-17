class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #prefilter 
        s = s.upper()
        t = t.upper()
        container = [0]*26
        empty = [0]*26
        for ch in s:
            container[ord('A') - ord(ch)] += 1
        for ch in t:
            container[ord('A') - ord(ch)] -= 1
        if container == empty:
            return True
        return False
        