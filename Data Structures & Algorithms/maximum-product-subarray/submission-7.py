class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        result = float('-inf') # define -infinity as lowest value
        prefix, suff = 1, 1 # set prefix computes
        for i in range(len(nums)):
            if prefix == 0:
                prefix = 1
            if suff == 0:
                suff = 1
            prefix *= nums[i]
            suff *= nums[len(nums)-i-1]
            result = max(prefix,suff, result) # check max prefix suff or result
        return result
        
            

            
        