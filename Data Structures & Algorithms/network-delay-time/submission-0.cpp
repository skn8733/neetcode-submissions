class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> graph(n+1);
        for(auto& edge: times){
            int u = edge[0], v=edge[1], t=edge[2];
            graph[u].push_back({v,t});
        }
        vector<int> min_distance(n+1,INT_MAX); 
        min_distance[k] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,k});
        while(!pq.empty()){
            auto [curr_dist, node] = pq.top();
            pq.pop();
            if(curr_dist > min_distance[node]) continue; // skip
            for(auto& edge: graph[node]){
                if (edge.second + curr_dist <min_distance[edge.first] ){
                    min_distance[edge.first] = edge.second + curr_dist;
                    pq.push({edge.second + curr_dist, edge.first});
                }
            }
        }
        int ans = 0;
        for(int i = 1; i <= n;i++){
            if(min_distance[i] == INT_MAX) return -1;
            ans = max(ans,min_distance[i]);
        }
        return ans;
    }
};
