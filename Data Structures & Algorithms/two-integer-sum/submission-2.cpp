class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complementMap;
        for(int i = 0; i < nums.size(); i++){
            if(complementMap.find(target - nums[i]) != complementMap.end()){
                return {complementMap[target - nums[i]],i};;
            }
            complementMap[nums[i]] = i;
        }
        return {};
    }
};
