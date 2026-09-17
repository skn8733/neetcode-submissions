class Solution {
public:

/**
 1.) we need to chekc row and column for duplicates 
*/
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        for (int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                // checking rows and columns
                if(rows[i].count(board[i][j])){
                    return false;
                }
                rows[i].insert(board[i][j]);
                if(cols[j].count(board[i][j])){
                    return false;
                }
                cols[j].insert(board[i][j]);

                // checking 3x3 boxes
                int box_id = (i/3) * 3 + (j/3);
                if (boxes[box_id].count(board[i][j])){
                    return false;
                }
                boxes[box_id].insert(board[i][j]);
            }
        }
        return true;
    }
};
