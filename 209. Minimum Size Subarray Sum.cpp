class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=INT_MAX;
        int i;
        int j=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==target){
                return 1;
            }
        }

        int sum=0;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
        }
        if(sum<target){
            return 0;
        }
        if(sum==target){
            return n;
        }
        sum=0;
        for(i=0;i<n;i++){
            sum=sum+nums[i];
            if(sum>=target){
                while(sum>=target){
                    len=min(len,i-j+1);
                    sum=sum-nums[j];
                    j++;
                }
               
            }
        }
        return len==INT_MAX?0:len;
    }
};
