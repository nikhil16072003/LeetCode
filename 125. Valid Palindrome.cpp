class Solution {
public:
    bool isPalindrome(string s) {
        string k="";
        int i;
        int n=s.length();
        char c;
        char x;
        string rev;
        for(i=0;i<n;i++){
            x=s[i];
            if(isalnum(x)){
                c=tolower(x);
                k=k+c;

            }
        }
        rev=k;
        reverse(k.begin(),k.end());
        if(k==rev){
            return true;
        }
        return false;

        
    }
};
