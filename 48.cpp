class Solution {
public:
    vector<vector<int>> ans(vector<vector<int>>& matrix){
        int n=matrix.size();
        vector<vector<int>> result(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                result[j][n-i-1]=matrix[i][j];
            }
        }
        return result;
    }
    void rotate(vector<vector<int>>& matrix) {
        matrix=ans(matrix);

    }
};