class Solution {
public:
void solve( set<vector<int>>&temp,vector<int>& nums,int st,int end){
    if(st==end){
        temp.insert(nums);
        return ;
    }
    int i;
    for(i=st;i<end;i++){
        swap(nums[st],nums[i]);
        solve(temp,nums,st+1,end);
        swap(nums[st],nums[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>temp;
         vector<vector<int>>ans;
         int n=nums.size();
        solve(temp,nums,0,n);
        vector<int>i;
        for(auto i:temp){
            ans.push_back(i);
        }

        return ans;
    }
};
