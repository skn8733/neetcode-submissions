class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        isdulplicate = False
        freq_map = Counter(nums)
        for element,count in freq_map.items():
            if count > 1:
                isdulplicate = True
        return isdulplicate

        