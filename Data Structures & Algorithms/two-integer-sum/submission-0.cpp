class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        int difference = 0;
        unordered_map<int,int> diff_map; // diff: index
        for (int i = 0; i < nums.size(); i++){
            difference = (target - nums[i]);
            if(diff_map.find(difference) != diff_map.end()){
                output.push_back(diff_map[difference]);
                output.push_back(i);
                return output;
            } else{
                diff_map[nums[i]] = i;
            }
        }
        return output;
        
    }
};
