class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i,j;
        int ans;
        for(i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;

            }
        }
        return ans;
    }
};
