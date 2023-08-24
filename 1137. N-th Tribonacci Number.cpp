class Solution {
public:
    int tribonacci(int n) {
        int a[n+1];
        int i;
        if(n==0 ||n==1){
            return n;
        }
          a[0]=0;
          a[1]=1;
          a[2]=1;
          for(i=3;i<=n;i++){
              a[i]=a[i-1]+a[i-2]+a[i-3];
          }
          return a[n];
    
    }
};
//////using recursion/////////////////////////////////************more time complexity**********************************************
class Solution {
public:
 int tribonacci(int n) {
   if(n==2 || n==1){
            return 1;
        }
         if(n==0){
             return 0;
         }
         return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
};
