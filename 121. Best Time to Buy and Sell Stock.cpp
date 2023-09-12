class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       int i,j;
       int mini=prices[0];
       int maxi=0;
       int curr;
       for(i=1;i<n;i++){
           curr=prices[i]-mini;
           maxi=max(maxi,curr);
           mini=min(mini,prices[i]);

       }
       return maxi;
    }
};
