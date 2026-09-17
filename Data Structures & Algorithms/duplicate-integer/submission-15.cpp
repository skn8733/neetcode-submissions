class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool isDuplicate = false;
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                if (nums[i] == nums[j]){
                    return not isDuplicate;
                }
            }
        }
        return isDuplicate;
    }
};