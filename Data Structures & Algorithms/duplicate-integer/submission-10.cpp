class Solution {
public:
    // runtime is O(n) and space is O(n)
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int> freqCount;
       for(int& val: nums) freqCount[val]++;
       for(auto& ele: freqCount){
        if(ele.second > 1) return true;
       }
       return false;
    }
};