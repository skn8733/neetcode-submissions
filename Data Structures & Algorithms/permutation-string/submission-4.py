class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        n, m = len(s1), len(s2)
        if m < n:
            return False
        s1count = [0]*26
        s2count = [0]*26
        for i in range(n):
            s1count[ord(s1[i]) - ord('a')] += 1
            s2count[ord(s2[i]) - ord('a')] += 1
        if s1count == s2count:
            return True
        
        for r in range(n,m):
            s2count[ord(s2[r]) - ord('a')] += 1
            s2count[ord(s2[r-n]) - ord('a')] -= 1
            if s1count == s2count:
                return True
        return False

                

        