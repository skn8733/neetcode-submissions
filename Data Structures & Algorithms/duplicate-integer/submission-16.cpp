class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq_table;
        for (auto &val: nums){
            freq_table[val] += 1;
        }
        for( auto& val: freq_table){
            if(val.second > 1){
                return true;
            }
        }
        return false;
    }
};