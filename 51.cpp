class Solution {
public:
    void addsolu(vector<vector<string>>& ans, vector<vector<int>>& vis, int n) {
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            string row = "";
            for (int j = 0; j < n; j++) {
                if (vis[i][j] == 1) {
                    row += 'Q';
                } else {
                    row += '.';
                }
            }
            temp.push_back(row);
        }
        ans.push_back(temp);
    }
    bool issafe(int row, int col, vector<vector<int>>& vis, int n) {
        int x = row, y = col;
        while (y >= 0) {
            if (vis[x][y] == 1) {
                return false;
            }
            y--;
        }
        x = row;
        y = col;
        while (y >= 0 && x < n) {
            if (vis[x][y] == 1) {
                return false;
            }
            y--;
            x++;
        }
        x = row;
        y = col;
        while (y >= 0 && x >= 0) {
            if (vis[x][y] == 1) {
                return false;
            }
            y--;
            x--;
        }
        return true;
    }
    void solve(int col, vector<vector<string>>& ans, vector<vector<int>>& vis,
               int n) {
        if (col == n) {
            addsolu(ans, vis, n);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (issafe(i, col, vis, n)) {
                vis[i][col] = 1;
                solve(col + 1, ans, vis, n);
                vis[i][col] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> vis(n, vector<int>(n, 0));
        vector<vector<string>> ans;
        solve(0, ans, vis, n);
        return ans;
    }
};
