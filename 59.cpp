class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));
        int left = 0, right = n - 1, top = 0, bot = n - 1, x = 1;
        while (left <= right && top <= bot) {
            for (int i = left; i <= right; i++) {
                if (x <= (n * n)) {
                    vec[top][i] = x;
                    x++;
                }
            }
            top++;
            for (int i = top; i <= bot; i++) {
                if (x <= (n * n)) {
                    vec[i][right] = x;
                    x++;
                }
            }
            right--;
            if (top <= bot) {
                for (int i = right; i >= left; i--) {
                    if (x <= (n * n)) {
                        vec[bot][i] = x;
                        x++;
                    }
                }
                bot--;
            }
            if (left <= right) {
                for (int i = bot; i >= top; i--) {
                    if (x <= (n * n)) {
                        vec[i][left] = x;
                        x++;
                    }
                }
                left++;
            }
        }
        return vec;
    }
};
