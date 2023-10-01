class Solution {
public:
void solve(set<vector<int>>&a,vector<int>&nums,vector<int>&res,int i){
    if(i==nums.size()){
        a.insert(res);
        return;
    }
    else{
        res.push_back(nums[i]);
        solve(a,nums,res,i+1);
        res.pop_back();
        solve(a,nums,res,i+1);


    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        set<vector<int>>a;
        solve(a,nums,res,0);
        vector<int>i;
        for(auto i:a){
            ans.push_back(i);
        }
        return ans;
        

        
    }
};
