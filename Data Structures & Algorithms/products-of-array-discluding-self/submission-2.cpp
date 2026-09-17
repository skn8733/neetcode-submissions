class Solution {
public:
/**
   [3, 2, 4, 6] ==> [1,3,6,24]
                    [48,24,6,1]
                 ==> []

    space is O(n) and runtime is O(n)
*/

    vector<int> productExceptSelf(vector<int>& nums) {
        int changed_value = 1;
        vector<int> output_vals(nums.size(),1);
        for (int i = 0; i < nums.size(); i++){
            output_vals[i] = changed_value;
            changed_value*=nums[i];
        }
        changed_value = 1;
        for (int j = nums.size() - 1; j >= 0; j--){
            output_vals[j]*=changed_value;
            changed_value *= nums[j];
        }
        return output_vals;

    }
};
