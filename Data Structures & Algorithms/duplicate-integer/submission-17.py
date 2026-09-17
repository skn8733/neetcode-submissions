class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = Counter(nums)
        for _, val in freq.items():
            if val > 1: 
                return True
        return False
        