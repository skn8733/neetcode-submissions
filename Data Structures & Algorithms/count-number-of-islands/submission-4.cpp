class Solution {
public:
    void dfs(int row, int col, int rows, int cols, vector<vector<bool>> &visited, vector<vector<char>> &grid) {
        if(row < 0 || row >= rows || col < 0 || col >= cols) return;
        if(grid[row][col] == '0' || visited[row][col]) return;

        visited[row][col] = true;

        dfs(row + 1, col, rows, cols, visited, grid);
        dfs(row - 1, col, rows, cols, visited, grid);
        dfs(row, col + 1, rows, cols, visited, grid);
        dfs(row, col - 1, rows, cols, visited, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        int num_islands = 0;

        for(int r = 0; r < rows; r++) {
            for(int c = 0; c < cols; c++) {
                if(grid[r][c] == '1' && !visited[r][c]) {
                    dfs(r, c, rows, cols, visited, grid);
                    num_islands++;
                }
            }
        }

        return num_islands;
        
    }
    
};
