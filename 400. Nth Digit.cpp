//method 1 very basic code but problrm is the time complexity
class Solution {
public:
    int findNthDigit(int n) {
        int i,j;
        int x;
        string y="";
        string g;
        string k;
        for(i=1;i<=n;i++){
              x=i;
              g=to_string(x);
              y=y+g;
        }
        
        k=y[n-1];
        
  x=stoi(k);
     
       return x;

    }
};
////////////

class Solution {
public:
    int findNthDigit(int n) {
        int a = 9, d = 1;
        while (n - (long)a * d > 0)
        {
            n -= a * d;
            a *= 10;
            d += 1;
        }
        int num = pow(10, d - 1) + (n - 1) / d;
        cout<<num;
        return to_string(num)[(n - 1) % d] - '0';
    }
};

