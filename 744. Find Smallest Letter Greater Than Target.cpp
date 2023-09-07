class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        string x="";
        int n=letters.size();
        int i;
        for(i=0;i<n;i++){
            
            x=x+letters[i];
        }
        x=x+target;
        sort(x.begin(),x.end());
        int u=0;

        for(i=1;i<n+1;i++){
            if(x[i]==x[i+1]){
                continue;
            }
            if(x[i]==target){
                u=i;
                break;
            }
        }
        if(u==n){
            return x[0];
        }
        return x[u+1];
    }
};
