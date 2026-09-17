class Solution {
public:
    // runtime is O(n) and space is O(n)
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicateCount;
        for(int& val: nums){
            if(++duplicateCount[val] > 1) return true;
        }
        return false;
    }
};