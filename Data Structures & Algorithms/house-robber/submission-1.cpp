class Solution {
public:
    int rob(vector<int>& nums) { 
        int one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++){
            int temp = max(one + nums[i],two);
            one = two;
            two = temp;
        }
        return two;
    }
};
