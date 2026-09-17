class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freqCount = Counter(nums)
        for _, val in freqCount.items():
            if val > 1:
                return True
        return False
       

        