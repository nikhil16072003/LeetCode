class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long curr;
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j = i+1;j<n;j++)
            {
                for(k = j+1;k<n;k++)
                {
                    curr = (long long)(nums[i] - nums[j]) * nums[k];
                    if(ans<curr){
                        ans=curr;
                    }
                
                }
            }
        }
        return ans;
    }
};
