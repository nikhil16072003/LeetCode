class Solution {
public:
void solve(vector<int>& nums,int st,int end,vector<vector<int>>&ans){
    if(st==end){
        ans.push_back(nums);
        return;
    }
    int i;
    for(i=st;i<end;i++){
        swap(nums[st],nums[i]);
        solve(nums,st+1,end,ans);
        swap(nums[st],nums[i]);

    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ans1;
        int n=nums.size();
        solve(nums,0,n,ans);
        return ans;

       
    }
};
