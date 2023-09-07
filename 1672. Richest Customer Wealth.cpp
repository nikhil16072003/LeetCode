class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int max=INT_MIN;
        int r=accounts.size();
        int c=accounts[0].size();
        int i,j;
        for(i=0;i<r;i++){
            sum=0;
            for(j=0;j<c;j++){
                sum=sum+accounts[i][j];
            }
            if(max<=sum){
                max=sum;

            }
        }
        return max;
        
    }
};
