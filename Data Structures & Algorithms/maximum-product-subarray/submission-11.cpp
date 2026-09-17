class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 0, suffix = 0;
        int output = nums[0];
        for(int i = 0; i < nums.size();i++){
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
            prefix *= nums[i];
            suffix *= nums[nums.size()-1-i];
            output = max(output, max(prefix,suffix));
        }
        return output;
    }
};
