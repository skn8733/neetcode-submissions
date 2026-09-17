class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        freq_s = Counter(s) # O(n)
        freq_t = Counter(t) # O(m)
        return freq_s == freq_t

        