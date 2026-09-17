class Solution {
public:
    // runtime is O(n) and space is O(n)
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicateCount;
        int maxOccurance = 0;
        for(int& val: nums){
            duplicateCount[val]++;
            if(duplicateCount[val] > maxOccurance){
                maxOccurance = duplicateCount[val];
            }
        }
        if (maxOccurance > 1) return true;
        return false;
    }
};