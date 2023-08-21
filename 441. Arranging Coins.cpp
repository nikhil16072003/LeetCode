//Brute force
class Solution {
public:
    int arrangeCoins(int n) {
       if(n==0 || n==1){
           return n;
       }
       long long i;
      long long sum=0;
      long long prev=0;
       long long count=0;
       for(i=1;i<n;i++){
           sum=sum+i;

           if(sum<=n && sum>prev){
                count=i;
           }
           prev=sum;
           
       }
       return count;
    }
};
/////////////////////////////////////////////////////////////////
class Solution {
public:
    int arrangeCoins(int n) {
        long long sum=0;
        int ans=0;
        int i;
        int temp;
        if(n==1 ||n==0){
            return n;
        }
        for(i=1;i<=n;i++){
            sum=sum+i;
           
           if(n==sum){
               ans=i;
               break;
           }
            if(n<sum){
                ans=i-1;
                break;
            }
    

        }
        return ans;
    }
};
