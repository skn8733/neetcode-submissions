class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = len(board)
        cols =len(board[0])
        for r in range(0,rows):
            for c in range(cols):
                if board[r][c] != ".":
                    # checking horizontal row
                    temp_row = r
                    for col_index in range(0,cols):
                        if col_index != c and board[temp_row][col_index] == board[r][c]:
                            return False
                    # checking vertical col
                    temp_col= c
                    for row_index in range(0,rows):
                        if row_index != r and board[row_index][temp_col] == board[r][c]:
                            return False
                    
                    # checking sub boxes 3x3
                    subbox_index_r = (r // 3) * 3
                    subbox_index_c = (c // 3) * 3
                    for new_sbr in range(subbox_index_r, subbox_index_r +3):
                        for new_sbc in range(subbox_index_c, subbox_index_c +3):
                            if (new_sbr != r or new_sbc != c) and board[new_sbr][new_sbc] == board[r][c]:
                                return False
        return True
