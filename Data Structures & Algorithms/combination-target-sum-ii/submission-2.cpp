class Solution {
public:
    vector<vector<int>> outcomes;
    void backtracking(vector<int>& path, int target,int index, vector<int>& nums){
        if(target == 0){
            outcomes.push_back(path);
            return;
        }
        for (int i = index; i < nums.size(); i++){
            // skip duplicates at the same recursive level
            if (i > index && nums[i] == nums[i-1]){
                continue;
            }
            // stop further processing if current number exceeds target
            if ( nums[i] > target){
                break;
            }
            path.push_back(nums[i]);
            backtracking(path, target-nums[i],i+1, nums); // use i+1 b/c element can be used once
            path.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> path;
        sort(candidates.begin(), candidates.end()); // avoid duplicates and pruning
        backtracking(path,target,0,candidates);
        return outcomes;
    }
};
