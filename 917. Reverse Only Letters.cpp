class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        string x;
        int i;
        vector<char>a;
        for(i=n-1;i>=0;i--){
          if(isalpha(s[i])){
              a.push_back(s[i]);
          }
          else{
              continue;
          }
           
        }
        int j=0;
        for(i=0;i<n;i++){
            if(isalpha(s[i])){
                s[i]=a[j];
                j++;
            }
            else{
                continue;
            }
        }
        return s;
    }
};
