class Solution {
public:
/**
   [1,2,4,6] (note the first doesn't have the first, last doesn't have last)
   prefix= [1,1,2,8]
           [48,24,6,1]
   
*/

    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix_value = 1;
        vector<int> output_arr(nums.size(),1);
        for (int i = 1; i < output_arr.size(); i++){
            prefix_value = nums[i-1]*prefix_value;
            output_arr[i] = prefix_value;
        }
        prefix_value = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            output_arr[i] = prefix_value * output_arr[i];
            prefix_value = nums[i] * prefix_value;
        }
        return output_arr;  
    }
};
