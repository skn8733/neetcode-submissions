class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complementMap;
        vector<int> output;
        int complement = 0;
        for(int i = 0; i < nums.size(); i++){
            complement = target - nums[i];
            if(complementMap.find(complement) != complementMap.end()){
                output = {complementMap[complement],i};
                return output;
            }
            complementMap[nums[i]] = i;
        }
        return output;
        
    }
};
