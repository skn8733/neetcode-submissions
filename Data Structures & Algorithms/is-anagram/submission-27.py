class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s = Counter(s) # O(n)
        for c in t:
            if c in s:
                freq_s[c] -= 1
            else:
                return False
        return not any(freq_s.values())
        
        
        