class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int types=n/2;
        set<int>ans;
        int i;
        for(i=0;i<n;i++){
            ans.insert(candyType[i]);
        }
        if(ans.size()<types){
            return ans.size();
        }
        return types;
        
    }
};
