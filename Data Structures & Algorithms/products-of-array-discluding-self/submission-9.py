class Solution:
    '''
    [1,2,4,6] ==> [2*4*6, 1*4*6, 1*2*6,1*2*4]
    pre = [1,1,2,2*4], post ==> [2*4*6,6*4,6,1] , pre*post ==> [1*2*4*6, 1*4*6, 2*6,1*2*4]
    '''
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        output = [1]*n
        prefix = 1
        for i in range(1,n):
            prefix = nums[i-1]*prefix
            output[i] = prefix
        postfix = 1
        for i in range(n-2,-1,-1):
            postfix = postfix * nums[i+1]
            output[i] = postfix*output[i]
        
        return output
            

        