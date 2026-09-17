class Solution {
public:
    // time = O(n + m + m) => O(n) & space = O(n + m) ==> O(n)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int,int> freq; 
        for (int v: nums){
            freq[v]++;
        }
        for (auto& pair: freq){
            int num = pair.first;
            int count = pair.second;
            buckets[count].push_back(num);
        }
        vector<int> output;
        for(int i = buckets.size() - 1; i >= 0 && output.size() < k; i--){
            for(int num: buckets[i]){
                output.push_back(num);
                if(output.size() == k){
                    break;
                }
            }
        }
        return output;
    }

    // // O(nlogn) and space O(n)
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     priority_queue<pair<int,int>> maxHeap;
    //     unordered_map<int,int> freq; 
    //     for (int v: nums){
    //         freq[v]++;
    //     }
    //     for (auto& pair: freq){
    //         maxHeap.push({pair.second,pair.first});
    //     }
    //     vector<int> output; 
    //     for(int i = 0; i <k; i++){
    //         output.push_back(maxHeap.top().second);
    //         maxHeap.pop();
    //     }
    //     return output;
    // }
};
