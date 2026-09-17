class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> maxHeap;
        unordered_map<int,int> freq; 
        for (int v: nums){
            freq[v]++;
        }
        for (auto& pair: freq){
            maxHeap.push({pair.second,pair.first});
        }
        vector<int> output; 
        for(int i = 0; i <k; i++){
            output.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return output;
    }
};
