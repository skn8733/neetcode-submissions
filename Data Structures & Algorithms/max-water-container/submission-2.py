class Solution:
    def maxArea(self, heights: List[int]) -> int:
        left, right = 0,len(heights)-1 
        maxValue = 0
        while(left < right):
            height = min(heights[left], heights[right])
            width = right - left
            maxValue = max(maxValue, height*width)
            if heights[left] < heights[right]:
                left += 1
            else:
                right -= 1
        return maxValue

        