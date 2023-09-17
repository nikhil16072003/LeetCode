//////
/*
The logic behind this approach , I think is related to the divisibility test of 9.
If you don't know then , "To check if a number is divisible by 9, add the digits of 
the number and check if the sum is divisible by 9 or not. If yes , is the case , then 
the number is divisible by 9 , otherwise it's not ."Now if you notice if a number is 
divisible by 9(and 3) , then if we follow the procedure as mention in the question 
(sum of digits of every previous num) , we would always find the new_num(the sum of the digits )
to be divisible by 9(and 3).

*/
/////////////////////////////////////////////////////////////////
class Solution {
public:
    int addDigits(int num) {
      if(num==0)
          return 0;
      else if(num%9==0)
          return 9;
      else
          return num%9;
    }
};
//////////////////////////////////////////////////////////////////
class Solution {
public:
    int addDigits(int num) {
      int sum=0;
        while(num>9)
        {
            while(num!=0)
            {
                sum+=(num%10);
                num/=10;
            }
            num=sum;
            sum=0;
        }
        return num;
    }
};
