class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int first=0;
        int all=0;
        int cap=0;
        int i;
       if(isupper(word[0])){
           first=1;
       }
        for(i=0;i<n;i++){
            if(islower(word[i])){
                all++;
            }
            if(isupper(word[i])){
                cap++;
            }

        }
        if(first==1 && all==(n-1)){
            return true;
        }
        if(all==n){
            return true;
        }
        if(cap==n){
            return true;
        }
        return false;
        
    }
};
