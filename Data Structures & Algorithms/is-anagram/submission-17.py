class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        #prefilter
        container1 = Counter(s)
        container2 = Counter(t)
        return container1 == container2

        