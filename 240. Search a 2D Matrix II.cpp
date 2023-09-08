class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i,j;
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
