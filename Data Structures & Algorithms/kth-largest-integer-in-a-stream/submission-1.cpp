class KthLargest {
public:
    int kth_value; // A => B 
    priority_queue<int,vector<int>,greater<int>> max_priority_queue;
    // [1,2,3] ==> top 3 so, idea [n-k,n-k-1,...,n-1] the idea.
    KthLargest(int k, vector<int>& nums) {
        kth_value = k;
        for (auto& val: nums){
            max_priority_queue.push(val);
            cout << max_priority_queue.top() << endl;
            if(max_priority_queue.size() > k){ // cutting off when size is greater
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
