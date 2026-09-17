class Solution {
public:
    bool dfs(int n, unordered_map<int, vector<int>> &graph, vector<int> &visited, vector<int> &instack){
        if(instack[n]) return false; // we found the cycle
        if(visited[n]) return true;
        instack[n] = 1;
        visited[n] = 1;
        for(int val: graph[n]){
            if(!dfs(val,graph, visited, instack)) return false; // this means dfs == false checking cycle case back as well.
        }
        instack[n] = 0;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> graph;
        for(auto& p: prerequisites){
            graph[p[0]].push_back(p[1]);
        }
        vector<int> visited(numCourses,0); // the visited notes
        vector<int> inStack(numCourses,0); // the current node being processes in the stack

        for(int i = 0; i < numCourses; i++){
            if(!dfs(i,graph, visited, inStack)) return false;
        }
        return true;
    }
};
