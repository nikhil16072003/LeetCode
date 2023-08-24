class Solution {
public:
    bool judgeSquareSum(int c) {
      long long int a=0;
      long long int b=sqrt(c);
      long long int ans=0;
      while(a<=b){
          ans=a*a+b*b;
          if(ans==c){
              return true;
          }
          else if(ans>c){
              b--;
          }
          else{
              a++;
          }
      }
      return false;
    }
};
