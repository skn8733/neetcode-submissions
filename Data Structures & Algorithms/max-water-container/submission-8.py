class Solution:
    '''
    left = 1, right = 6 ==> 7*1 = 7 ==> l < r ==> left ++, max = 7
    left = 7, right = 6 ==> 6*6 =36 ==> r < l ==> right -- , max = 36
    left = 7, right ===>

    '''
    def maxArea(self, heights: List[int]) -> int:
        maxValue = 0
        left, right =  0, len(heights) -1
        while left <= right:
            maxValue = max(maxValue,min(heights[left],heights[right]) * (right - left))
            if heights[left] < heights[right]:
                left += 1
            else:
                right -= 1
        
        return maxValue

        