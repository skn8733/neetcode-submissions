class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # 3,4,5,6 
        # container, is target -3 in it? no, so add 3 to container 
        # do this until end O(n) and space O(n)
        container = {} # map 
        n = len(nums)
        output = []
        for i in range(n):
            current = nums[i]
            complement = target - current
            if complement in container:
                output = [container[complement], i]
            else:
                container[current] = i
        return output
                
        