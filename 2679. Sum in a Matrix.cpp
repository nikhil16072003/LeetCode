class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int r=nums.size();
        int c=nums[0].size();
        int i,j;
        int max=0;
        int k;
        int m;
        for(i=0;i<r;i++){
           sort(nums[i].begin(),nums[i].end());
        }
        
       for(i=0;i<c;i++){
           m=0;
           for(j=0;j<r;j++){
               
               if(m<nums[j][i]){
                   m=nums[j][i];
               }
           }
           max=max+m;
       }

        return max;
        
    }
};
