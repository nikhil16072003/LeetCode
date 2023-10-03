class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int count=1;
       int maxi=1;
       int i;
       int n=nums.size();
       if(nums.size()==0){
           return 0;
       }
       sort(nums.begin(),nums.end());
       for(i=1;i<n;i++){
           if(nums[i]!=nums[i-1]){
               if(nums[i]-nums[i-1]==1){
                   count++;
               }
               else{
                   maxi=max(count,maxi);
                   count=1;
                }
           }
       }
       maxi=max(maxi,count);
       return maxi;
    }
};
