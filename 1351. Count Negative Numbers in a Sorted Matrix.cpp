class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n1=grid.size();
        int n2=grid[0].size();
        int count=0;
        int i,j;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if(grid[i][j]<0){
                    count++;
                }
            }
        }
        return count;
    }
};
