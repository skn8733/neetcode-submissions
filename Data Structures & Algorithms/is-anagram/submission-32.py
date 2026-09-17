class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        freqS = Counter(s)
        for ch in t:
            freqS[ch] -= 1
        for _, count in freqS.items():
            if count > 0:
                return False
        return True
        