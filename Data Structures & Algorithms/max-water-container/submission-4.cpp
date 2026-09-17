class Solution {
public:
    // The max area = the max width * the min height
    // so if you shortening the width the height needs to compensate to find better volume
    // so if left height is < right move left , and if right is less than left move right
    int maxArea(vector<int>& heights) {
        size_t total = heights.size();
        int left = 0, right = heights.size() - 1, maxValue = 0, width = 0, height = 0;
        while(left < right){
            width = right - left;
            height = min(heights[left], heights[right]);
            maxValue = max(maxValue, width*height);
            if (heights[left] > heights[right]){
                right--;
            } else{
                left++;
            }
        }
        return maxValue;
    }
};
