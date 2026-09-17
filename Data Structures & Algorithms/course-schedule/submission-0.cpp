class Solution {
public:
// [[0,1][1,0]] ==> (0) ==> (1) ==> (0) ( cycle detected)
    // DFS Approach and check cycle
    unordered_map<int,vector<int>> preqMap;
    unordered_set<int> visiting;

    bool dfs(int course){
        if(visiting.count(course)){
            return false; // cycle
        }
        if(preqMap[course].empty()){
            return true;
        } 
        visiting.insert(course);
        for(int pre: preqMap[course]){
            if(!dfs(pre)) return false;
        }
        visiting.erase(course);
        preqMap[course].clear();
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for(int i = 0; i < numCourses; i++){
            preqMap[i] = {};
        } 
        for(const auto& prereq: prerequisites){
            preqMap[prereq[0]].push_back(prereq[1]);
        }
        for(int c = 0; c < numCourses; c++){
            if(!dfs(c)) return false;
        }
        return true;
    }
};
