class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int i;
        int n=nums.size();
        for(i=1;i<n;i++){
            ans.push_back(i);
        }
        ans.push_back(n-1);
        for(i=0;i<n;i++){
            if(ans[i]!=nums[i]){
                return false;
            }
        }
        return true;
    }
};
