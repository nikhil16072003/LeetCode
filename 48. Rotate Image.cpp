class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> temp=matrix;
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
               matrix[j][n-i-1]=temp[i][j];
            }
        }
        
    }
};
