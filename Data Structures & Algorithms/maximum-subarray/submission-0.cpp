class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxS =nums[0];
        for(int i = 0; i < nums.size(); i++){
            int cur = nums[i];
            maxS = max(cur,maxS);
            for(int j = i+1; j < nums.size(); j++){
                cur += nums[j];
                maxS = max(cur,maxS);
            }
        }
        return maxS;
    }
};
