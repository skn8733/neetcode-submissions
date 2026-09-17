class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.empty()) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        int one = dp[0], two =dp[1];
        for(int i = 2; i < nums.size(); i++){
            one = dp[i-2];
            two = dp[i-1] ;
            dp[i] = max(one + nums[i],two);
        }
        return dp[nums.size()-1];
    }
};
