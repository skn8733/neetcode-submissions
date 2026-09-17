class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> freq_queue;
        unordered_map<char,int> freq_count;
        for(char value: tasks){
            freq_count[value] += 1;
        }
        for(auto & item: freq_count){
            freq_queue.push(item.second);
        }
        queue<pair<int,int>> cooldown; // time task avaible, reminaing frequency
        int time = 0;

        while(!freq_queue.empty() || !cooldown.empty()){
            time++;
            if(!freq_queue.empty()){
                int freq = freq_queue.top();
                freq_queue.pop();
                freq--;
                if (freq > 0){
                    cooldown.push({time+n,freq});
                } 
            }
            if (!cooldown.empty() && cooldown.front().first == time){
                freq_queue.push(cooldown.front().second);
                cooldown.pop();
            }

        }
        return time;

    }
};
