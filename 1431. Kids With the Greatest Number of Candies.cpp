class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<int>v;
        int i,j;
        for(i=0;i<n;i++){
            v.push_back(candies[i]);
        }
        sort(v.begin(),v.end());
        vector<bool>ans;
        int max=v[n-1];
        for(i=0;i<n;i++){
            if(candies[i]+extraCandies>=max){
               ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
        
    }
};
