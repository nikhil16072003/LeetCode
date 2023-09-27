class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int n=nums.size();
        int ans=0;
        for(i=0;i<n;i=i+2){
          if(i%2==0){
              ans=ans+nums[i];
          }

        }
        return ans;
        
    }
};
