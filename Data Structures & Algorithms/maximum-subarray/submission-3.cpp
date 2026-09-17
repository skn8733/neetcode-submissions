class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefix = 0;
        int maxS = nums[0];
        for(int i = 0; i < nums.size(); i++){
            if(prefix < 0) prefix = 0;
            prefix += nums[i];
            maxS = max(maxS,prefix);
        }
        return maxS;
    }
};
