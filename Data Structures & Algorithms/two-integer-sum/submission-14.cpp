class Solution {
public:
    // nums=[x1, ..], comp = target - xi
    // if comp in [{comp,i_1}, ...]: return []
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> compMap;
        for (int i = 0; i < n; i++){
            int comp = target - nums[i];
            if (compMap.find(comp) != compMap.end()){
                return {compMap[comp], i};
            } 
            compMap[nums[i]] = i;
        }
        return {};
	}
};
