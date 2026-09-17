class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqS;
        for(int& val: nums) freqS[val]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto& keyVal: freqS){
            pq.push({keyVal.second, keyVal.first});
            if(pq.size() > k) pq.pop();
        }
        vector<int> values;
        for(int i = 0; i < k; i++){
            values.push_back(pq.top().second);
            pq.pop();
        }
        return values;
    }
};
