class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int i;
        string first=strs[0];
        string last=strs[n-1];
        for(i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans=ans+first[i];

        }
       return ans;
        
    }
};
