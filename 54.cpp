class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r=matrix.size(),c=matrix[0].size();
        int count=0,total =r*c;
        int sr=0,sc=0,er=r-1,ec=c-1;
        while(count<total){
            for(int index=sc;count<total && index<=ec;index++){
                ans.push_back(matrix[sr][index]);
                count++;
            }
            sr++;
            for(int index=sr;count<total && index<=er;index++){
                ans.push_back(matrix[index][ec]);
                count++;
            }
            ec--;
            for(int index=ec;count<total && index>=sc;index--){
                ans.push_back(matrix[er][index]);
                count++;
            }
            er--;
            for(int index=er;count<total && index>=sr;index--){
                ans.push_back(matrix[index][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};
