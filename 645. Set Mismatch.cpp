class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int i;
        int sum=0;
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
        int sum2=0;
        for(i=0;i<n;i++){
            sum2=sum2+nums[i];
        }
        
       sort(nums.begin(),nums.end());
       for(i=0;i<n-1;i++){
           if(nums[i]==nums[i+1]){
               ans.push_back(nums[i]);
               break;
           }
       }
       int act=sum-sum2;
       int m=ans[0]+act;
       ans.push_back(m);

      return ans;

    }
};
