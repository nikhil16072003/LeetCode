class Solution {
public:
   void solve(vector<vector<int>>&ans,vector<int>&res,int n,int k){
      if(res.size()==k){
          ans.push_back(res);
          return;
      }
      if(n==0){
          return;
      }
     res.push_back(n);
     solve(ans,res,n-1,k);
     res.pop_back();
     solve(ans,res,n-1,k);


   }
    vector<vector<int>> combine(int n, int k) {
        vector<int>res;
        vector<vector<int>>ans;
        solve(ans,res,n,k);
        return ans;

        
    }
};
