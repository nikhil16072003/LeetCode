class Solution {
public:
void solve(vector<int>&nums,vector<vector<int>>&result,vector<int>&ans,int st,int end){
    result.push_back(ans);
    int i;
    for(i=st;i<end;i++){
        ans.push_back(nums[i]);
        solve(nums,result,ans,i+1,end);
        ans.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>ans;
        int n=nums.size();
        solve(nums,result,ans,0,n);
        return result;
        
    }
};
////////////////100% beats////////////////////////////////////////
class Solution {
public:
void solve(vector<int>&nums,vector<vector<int>>&result,vector<int>&ans,int st,int end){
    
    
    if(st>=end){
        result.push_back(ans);
        return;
    }
        solve(nums,result,ans,st+1,end);
        ans.push_back(nums[st]);
        solve(nums,result,ans,st+1,end);
        ans.pop_back();
    
  
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>ans;
        int n=nums.size();
        solve(nums,result,ans,0,n);
        return result;
        
    }
};
