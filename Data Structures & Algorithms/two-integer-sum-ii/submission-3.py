class Solution:
    '''
    1,2,3,4 ==> l = 1, r = 2 
    target = 3
    '''
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        left, right = 0, len(numbers)-1
        while left < right:
            sumValue = numbers[left] + numbers[right]
            if sumValue > target:
                right -= 1
            elif  sumValue < target:
                left += 1
            else:
                return [left+1,right+1]
        return []
    
        