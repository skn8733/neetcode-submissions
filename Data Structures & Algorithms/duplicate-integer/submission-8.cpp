class Solution {
public:
    // runtime is O(n) and space is O(n)
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicateCounts;
        for(auto &val: nums){
            duplicateCounts[val] += 1;  
        }
        for(auto& item: duplicateCounts){
            if(item.second >= 2){
                return true;
            }
        }
        return false;
    }
};