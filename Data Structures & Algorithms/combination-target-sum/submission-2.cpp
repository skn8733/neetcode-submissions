class Solution {
public:
// [2, 5, 6, 9] ==> 
    vector<vector<int>> outcomes;
    void backtracking(vector<int>& path, int target,int index, vector<int>& nums){
        if(target == 0){
            outcomes.push_back(path);
            return;
        }
        for (int i = index; i < nums.size(); i++){
            if ( nums[i] > target){
                continue;
            }
            path.push_back(nums[i]);
            backtracking(path, target-nums[i],i, nums);
            path.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> path;
        backtracking(path,target,0,nums);
        return outcomes;
    }
};
