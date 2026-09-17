class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        '''
        [3,4,5,6] ==> [(3,0),(4,1),(5,2),(6,3)] ==> sort 
        left and right pointer until nums[left][0] + nums[right][0] == target
        runtime is O(nlogn) and space is O(n) can do better 
        '''
        map_store = {}
        n = len(nums)
        for i in range(n):
            compliment = target - nums[i]
            if compliment in map_store:
                return [map_store[compliment], i]
            # adding the element to store
            map_store[nums[i]] = i
        return []

        
        
        
                
        