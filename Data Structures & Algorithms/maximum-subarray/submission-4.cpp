class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum, maxSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            maxSum = max(maxSum, nums[i]);
            currSum = nums[i];
            for(int j = i+1; j < nums.size(); j++){
                currSum+= nums[j];
                maxSum = max(maxSum, currSum);
            }
        }
        return maxSum;

    }
};
