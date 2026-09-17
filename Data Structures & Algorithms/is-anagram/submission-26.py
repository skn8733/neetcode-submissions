class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s = Counter(s) # O(n)
        for c in t:
            if c in s:
                freq_s[c] -= 1
            else:
                return False
        for _, val in freq_s.items():
            if val != 0:
                return False
        return True
        
        
        