class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i=i+3){
             if(nums[i]!=nums[i-1] || nums[i]!=nums[i+1]){
                 if(nums[i]!=nums[i-1] ){
                     return nums[i-1];
                 }
                 if( nums[i]!=nums[i+1]){
                     return nums[i+1];
                 }
               
             }
        }
        return nums[n-1];
    }
    
};
