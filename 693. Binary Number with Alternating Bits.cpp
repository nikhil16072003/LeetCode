class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>ans;
        while(n!=0){
            ans.push_back(n%2);
            n=n/2;
        }
        int i;
        for(i=0;i<ans.size()-1;i++){
            if(ans[i]==ans[i+1]){
                return false;
            }
        }
        return true;
    }
};
