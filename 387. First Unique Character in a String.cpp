class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ans;
        int n=s.length();
        int i,j;
        for(i=0;i<n;i++){
            ans[s[i]]++;
        }
        for(i=0;i<n;i++){
            if(ans[s[i]]==1){
                return i;
            }
        }
        return -1;
        
    }
};
