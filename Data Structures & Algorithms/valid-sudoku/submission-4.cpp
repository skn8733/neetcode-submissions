class Solution {
public:

/**
 1.) we need to chekc row and column for duplicates 
*/
    bool isValidSudoku(vector<vector<char>>& board) {
        int r_size = board.size();
        int c_size = board[0].size();
        vector<int> check_value(9, 0);
        int temp = 0;

        for (int i = 0; i < r_size; i++){
            for(int j = 0; j < c_size; j++){
               
                if (board[i][j] != '.'){
                    // checking column

                    for(int c = 0; c < c_size; c++){
                        if (board[i][c] != '.'){
                            temp = board[i][c] -'0';
                            check_value[temp-1]++;
                        }
                    }
                    // checking valid 
                    for (int v = 0; v < check_value.size(); v++){
                        if (check_value[v] > 1){
                            return false;
                        }
                    }
                    check_value.assign(9,0);
                    // check row
                    for(int r = 0; r < r_size; r++){
                        if (board[r][j] != '.'){
                            temp = board[r][j] - '0';
                            check_value[temp-1]++;
                        }
                    }
                    // checking valid 
                    for (int v = 0; v < check_value.size(); v++){
                        if (check_value[v] > 1){
                            return false;
                        }
                    }
                    check_value.assign(9,0);
                    // checking the current subbox
                    int box_rstart = (i/3) * 3; 
                    int box_cstart = (j/3) * 3;

                    for ( int ri = box_rstart; ri < box_rstart+3; ri++){
                        for(int ci = box_cstart; ci < box_cstart+3; ci++){
                            if (board[ri][ci] != '.'){
                                temp = board[ri][ci] - '0';
                                check_value[temp-1]++;
                            }
                        }
                    }
                     // checking valid 
                    for (int v = 0; v < check_value.size(); v++){
                        if (check_value[v] > 1){
                            return false;
                        }
                    }
                    check_value.assign(9,0);
                }
            }
        }
        return true;
    }
};
