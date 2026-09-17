class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto & p: prerequisites){
            indegree[p[1]]++;
            adj[p[0]].push_back(p[1]);
        }
        queue<int> q;
        for(int i = 0; i < numCourses;i++){
            if(indegree[i]==0) q.push(i);
        }
        int done = 0;
        while(!q.empty()){
            int node = q.front(); q.pop(); done++;
            for(int nei: adj[node]){
                indegree[nei]--;
                if(indegree[nei] ==0) q.push(nei);
            }
        }
        return done == numCourses;
    }
};
