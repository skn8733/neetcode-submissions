class Solution {
public:
    // The max area = the max width * the min height
    // so if you shortening the width the height needs to compensate to find better volume
    // so if left height is < right move left , and if right is less than left move right
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1, maxValue = 0;
        while(left < right){
            maxValue = max(maxValue, (right - left)*min(heights[left], heights[right]));
            if (heights[left] > heights[right]) right--;
            else left++;
        }
        return maxValue;
    }
};
