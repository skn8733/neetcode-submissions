class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''
        [3,4,5,6] ==> [(3,0),(4,1),(5,2),(6,3)] ==> sort 
        left and right pointer until nums[left][0] + nums[right][0] == target
        runtime is O(nlogn) and space is O(n) can do better 
        '''
        indexMap = {}
        for i, num in enumerate(nums):
            comp = target - num
            if comp in indexMap:
                return [indexMap[comp], i]
            indexMap[num] = i
        return [] 
        
        
        
                
        