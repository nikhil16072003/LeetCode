class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
         int median=n/2;
        for(int i=0;i<n;i++){
           ans=ans+abs(nums[i]-nums[median]);
        }

        return ans;
    }
};
