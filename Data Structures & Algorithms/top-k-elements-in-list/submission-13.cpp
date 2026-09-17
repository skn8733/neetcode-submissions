class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int& val: nums) count[val]++;
        vector<pair<int,int>> arr;
        for(const auto& p: count){
            arr.push_back({p.second,p.first});
        }
        sort(arr.begin(), arr.end());

        vector<int> res;
        int size = arr.size();
        for(int i = size-1; i >= size-k; i--){
            res.push_back(arr[i].second);
            
        }
        return res;
    }
};
