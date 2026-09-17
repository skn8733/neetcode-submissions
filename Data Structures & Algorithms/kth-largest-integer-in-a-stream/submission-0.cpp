class KthLargest {
public:
    int kth_value;
    priority_queue<int,vector<int>,greater<int>> max_priority_queue;
    KthLargest(int k, vector<int>& nums) {
        kth_value = k;
        for (auto& val: nums){
            max_priority_queue.push(val);
            if(max_priority_queue.size() > k){
                max_priority_queue.pop();
            }
        }
    }
    
    int add(int val) {
        max_priority_queue.push(val);
        if(max_priority_queue.size() > kth_value){
            max_priority_queue.pop();
        }
        return max_priority_queue.top();
    }
};
