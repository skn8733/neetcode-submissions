class KthLargest {
public:
    int kth_value; //   A <= B
    priority_queue<int,vector<int>,greater<int>> min_priority_queue; // A <= B ( A is larger)
    // [1,]
    KthLargest(int k, vector<int>& nums) {
        kth_value = k;
        for (auto& val: nums){
            min_priority_queue.push(val);
            cout << min_priority_queue.top() << endl;
            if(min_priority_queue.size() > k){ // cutting off when size is greater
                min_priority_queue.pop(); 
            }
            
        }
    }
    
    int add(int val) {
        min_priority_queue.push(val);
        if(min_priority_queue.size() > kth_value){
            min_priority_queue.pop();
        }
        return min_priority_queue.top();
    }
};
