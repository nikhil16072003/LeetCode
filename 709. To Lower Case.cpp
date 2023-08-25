class Solution {
public:
    string toLowerCase(string s) {
        int i;
        string ans="";
        string x;
        int n=s.length();
        for(i=0;i<n;i++){
            x=tolower(s[i]);
            ans=ans+x;
        }
        return ans;
    }
};
