class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool value = false;
        unordered_map<int,int> counter;
        for (int val: nums){
            counter[val] += 1;
        }
        int count = 0;
        for(int val: nums){
            count = counter[val];
            if(count >= 2){
                return true;
            }
            
        }
        return value;
        // bool value = false;
        // vector<int> counter;
        // for (int& val: nums){
        //     if (find(counter.begin(), counter.end(), val) != counter.end()){
        //         value = true;
        //         return value;
        //     } else{
        //         counter.push_back(val);
        //     }
        // }
        // return value;
        // O(n^2) approach O(1)
        // bool value = false;
        // int n = nums.size();
        // for(int i = 0; i < n-1; i++){
        //     for(int j = i+1; j < n; j++){
        //         if (nums[i] == nums[j]){
        //             value = true;
        //             return value;
        //         }
        //     }
        // }
        // return value;
    }
};