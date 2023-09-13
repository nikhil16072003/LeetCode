class Solution {
public:
    bool checkRecord(string s) {
        int a=0;
        int l=0;
        int p=0;
        int n=s.size();
        int max=0;
        int i;
        if(n==1){
            return true;
        }
        if(n==2){
            for(i=0;i<n;i++){
                if(s[i]=='A'){
                    a++;
                }
                
            }
            if(a<2){
                return true;
            }
        
        }
        if(n>=3){
            for(i=0;i<n;i++){
                if(s[i]=='A'){
                    a++;
                }
            }
        for(i=2;i<n;i++){
            if(s[i]=='L' && s[i-1]=='L' && s[i-2]=='L' ){
                max=1;
            }
           
        }
        if(a<2 && max!=1){
            return true;
        }


    }
          return false;
    }
};
