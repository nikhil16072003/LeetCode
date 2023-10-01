class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

       int i;
       int n=nums.size();
       set<int>s;
       for(i=n-1;i>=0;i--){
           if(s.size()==k){
               break;
           }
           else{
               if(nums[i]<=k){
                   s.insert(nums[i]);
               }
           }
       }
       return nums.size()-i-1;
    }
};
