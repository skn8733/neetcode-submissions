class Solution:
    '''
    if value appears more than once 
    '''
    def hasDuplicate(self, nums: List[int]) -> bool:
        freqCount = Counter(nums)
        for val,freq in freqCount.items():
            if freq > 1:
                return True
        return False
        