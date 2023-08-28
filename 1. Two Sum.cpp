class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        int sum=0;
        vector<int>ans;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                 if(nums[i]+nums[j]==target){
                     ans.push_back(i);
                     ans.push_back(j);
                     return ans;
                 }
            }
        }
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
