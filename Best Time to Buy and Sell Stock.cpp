class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int i,j,k;
        int n=prices.size();
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(prices[j]-prices[i]>=profit){
                    profit=prices[j]-prices[i];
                }
               
            }
        }
        return profit;
    }
