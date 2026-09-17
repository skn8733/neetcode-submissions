class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        // define comparitor
        auto comparePairs = [](const pair<int,int>& pair1, const pair<int,int>& pair2){
            return pair1.second > pair2.second;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(comparePairs)> pqQueue(comparePairs);
        vector<int> output;
        unordered_map<int,int> freqCount;
        for(auto& val: nums){
            freqCount[val]++;
        }
        for(auto& pr: freqCount){
            pqQueue.push({pr.first,pr.second});
            if (pqQueue.size() > k){
                pqQueue.pop();
            }
        }
        while (k >= 1){
            output.push_back(pqQueue.top().first);
            pqQueue.pop();
            k--;
        }
        return output;
        
    }

};
