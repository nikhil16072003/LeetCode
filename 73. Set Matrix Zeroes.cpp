class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i,j,k;
        vector<vector<int>>v=matrix;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(k=0;k<n;k++){
                        v[k][j]=0;
                    }
                }
            }

        }

         for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(k=0;k<m;k++){
                        v[i][k]=0;
                    }
                }
            }

        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                matrix[i][j]=v[i][j];
            }
        }


    }
};
