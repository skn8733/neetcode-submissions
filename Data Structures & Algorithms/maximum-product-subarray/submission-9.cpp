class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxOutput = nums[0];
        for(int i = 0; i < nums.size();i++){
            int cur = nums[i];
            maxOutput = max(cur,maxOutput);
            for(int j = i+1; j < nums.size();j++){
                cur = cur*nums[j];
                maxOutput = max(cur,maxOutput);
            }
        }
        return maxOutput;
        
    }
};
