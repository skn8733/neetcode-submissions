class Solution:
    '''
    [0,2,0,3,1,0,1,3,2,1] , l = 1, 3, 4
    i = 0, maxLeft = 0, maxRight = 3,  
    '''
    def trap(self, height: List[int]) -> int:
        # Two pointer
        n = len(height)
        l, r = 0, n-1
        leftMax, rightMax = height[l], height[r]
        result = 0
        
        while l < r:
            if leftMax < rightMax:
                l+=1
                leftMax = max(leftMax,height[l]) # (0,2), (2,0)
                result += leftMax - height[l] # 2-2 = 0, 2 - 0 = 2
            else:
                r-=1
                rightMax = max(rightMax,height[r]) # (1,2), (2,3), (3,1)
                result += rightMax - height[r] # 2-2 = 0, 3-3 = 0, 3-1 = 2.. 
        return result

        # O(n^2) solution
        # n = len(height)
        # result = 0
        # for i in range(n):
        #     maxLeft = maxRight = height[i]
        #     for j in range(i):
        #         maxLeft = max(maxLeft, height[j])
        #     for j in range(i+1,n):
        #         maxRight = max(maxRight, height[j])
        #     result += min(maxRight, maxLeft) - height[i]

        # return result
        