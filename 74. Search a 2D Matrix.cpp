class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size();
        int m=matrix[0].size();
        int i,j;
        int flag=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j]==target){
                    flag=1;
                }
            }
        }
       if(flag==1){
           return true;
       }
        return false;
    }
};
