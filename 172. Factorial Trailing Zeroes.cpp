class Solution {
public:
   
    int trailingZeroes(int n) {
        if(n==0){
            return 0;
        }
        int fa=1;
        int i;
        for(i=n;i>=1;i--){
            fa=fa*i;
        }
        int count=0;
        string s=to_string(fa);
        int n1=s.length();
        if(s.length()==1){
            return 0;
        }
        
        for(i=(n1-1);i>=0;i--){
            if(s[i]=='0'){
                count++;
            }
            else{
                break;
            }
          }       

return count;         
    }
};
///////////////////////////////////
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n>0){
            ans+=n/5;
            n=n/5;
        }
        return ans;
    }
};
