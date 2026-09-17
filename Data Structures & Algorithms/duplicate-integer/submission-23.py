class Solution:
    '''
     if num in nums, skip, 
     if nums not in nums seen 
    '''
    def hasDuplicate(self, nums: List[int]) -> bool:
        nonDuplicates = {}
        for num in nums:
            if num not in nonDuplicates:
                nonDuplicates[num] = 1
            else:
                return True
        return False



       