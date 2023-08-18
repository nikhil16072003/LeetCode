class Solution {
public:
    int reverse(int x) {
    
        long rem;
       long num=0;
       while(x!=0){
           rem=x%10;
           num=num*10+rem;
           x=x/10;
       }
         if(num<pow(-2,31) || num>(pow(2,31)-1) ){
            return 0;
        }

        return num;
    }
};
