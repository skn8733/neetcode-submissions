class Solution {
public:
    vector<pair<int,int>> directions = {{0,-1}, {1,0}, {0,1}, {-1,0}};
    
    void dfs (int r, int c, vector<vector<int>>& grid, int &currentArea){
        if(r < 0 || r >= grid.size() || c < 0 || c >=grid[0].size() || grid[r][c] != 1) return;
        grid[r][c] = 0;
        currentArea++;
        for (int i  = 0; i < 4;i++){
            // int nr = r + directions[i].first;
            // int nc = c + directions[i].second;
            dfs(r + directions[i].first, c + directions[i].second, grid, currentArea); 
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        int maxArea = 0;
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
            if(grid[r][c] == 1){
                int currentArea = 0;
                dfs(r, c, grid, currentArea);
                maxArea = max(maxArea, currentArea);
                }
            }
        }
	    return maxArea; 
    }
};
