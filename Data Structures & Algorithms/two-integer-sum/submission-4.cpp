class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> complementStorage;
            int complement = 0;
            for(int i = 0; i < nums.size(); i++){
                complement = target - nums[i];
                if(complementStorage.find(complement) != complementStorage.end()){
                    return {complementStorage[complement],i };
                } 
                complementStorage[nums[i]] = i;
            }
            return {};
	}
};
