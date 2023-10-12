class Solution {
public:
void subsequnce(vector<int>& nums, vector<int>&ds , int i , int n,set<vector<int>>&s)
{
    if( i == n )
    {
        if( ds.size()>1)
        {
            s.insert( ds);
        }
        return ;

    }
    ds.push_back(nums[i]);
    subsequnce(nums,ds, i+1, n,s);
    ds.pop_back();
    subsequnce( nums , ds, i+1, n,s);

}

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>s;
         vector<vector<int>> ans;
        int n = nums.size();
        vector<int> ds;
        subsequnce(nums, ds, 0 , n,s);
        for( auto x : s){
            vector<int> temp = x; 
            sort( temp.begin(), temp.end());
            if( temp ==x )
            ans.push_back(x);
          
        }

        return ans;
    }

};
