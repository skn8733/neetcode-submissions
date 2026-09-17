class Solution:
    def findMin(self, nums: List[int]) -> int:
        left = 0 
        right = len(nums)-1
        mid = 0
        while left < right:
            mid = (right + left) // 2
            if nums[mid] > nums[right]:
                left = mid + 1
            # elif nums[left] > nums[right] and nums[right] > nums[mid]:
            #     if  nums[mid+1] > nums[mid] and nums[mid-1] > nums[mid]:
            #         return nums[mid]
            #     else:
            #         right = mid - 1
            else:
                right = mid
        return nums[left]
        
        