class Solution:
    # nums[i] + nums[j] == target ==> nums[i] = target - nums[j]
    # 4 ==> is 7-4 in storage(3)? ==> yep, so storag ((3,ind=0), return [0,1]
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        compMap = {}
        for i,val in enumerate(nums):
            comp = target - val
            if comp in compMap:
                return [compMap[comp],i]
            compMap[val] = i
        return []
        