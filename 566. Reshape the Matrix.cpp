class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1=mat.size();
        int c1=mat[0].size();
        vector<int>temp;
        int i,j;
        if((r1*c1)!=(r*c)){
            return mat;

        }
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                temp.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>ans;
        int k=0;
        for(i=0;i<r;i++){
             vector<int>a;
            for(j=0;j<c;j++){
                a.push_back(temp[k]);
                k=k+1;

            }
            ans.push_back(a);
        }
        return ans;
    }
};
