class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char val) {
        for (int i = 0; i < board[0].size(); i++) {
            if ((board[row][i] == val) || (board[i][col] == val)) {
                return false;
            }
            if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == val) {
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board) {
        int n = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') {
                    for (char k = '1'; k <= '9'; k++) {
                        if (isSafe(i, j, board, k)) {
                            board[i][j] = k;
                            if (solve(board)) {
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) { solve(board); }
};
