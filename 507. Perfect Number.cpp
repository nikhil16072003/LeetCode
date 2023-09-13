class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i;
       
        int sum=0;
        int n1=num/2;
        for(i=1;i<=n1;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};
