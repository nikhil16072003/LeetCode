class Solution {
public:

    bool isZeroInteger(int k)
    {
        while(k>9)
        {
            if(k%10 == 0) return true;
            k/=10;
        }
        return false;
    }

    int whichDigit(int k)
    {
        int r = 1;
        while(k>9)
        {
            if(k%10 ==0) return r;
            k/=10;
            r*=10;
        }
        return -1;
    }

    vector<int> getNoZeroIntegers(int n) {
        int a = n-1;
        int b = 1;

        while(isZeroInteger(a) || isZeroInteger(b))
        {
            if(isZeroInteger(a))
            {
                int r = whichDigit(a);
                a-=r;
                b+=r;
            }
            else if(isZeroInteger(b))
            {
                int r = whichDigit(b);
                a-=r;
                b+=r;
            }

        }

        vector<int>result;
        result.push_back(a);
        result.push_back(b);
        return result;

    }
};


///////////////

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int i,j;
        int sum;
        int x=0;
        vector<int>ans;
        string s;
        int k;
        int n1;
        int z;
       for(i=1;i<n;i++){
           for(j=n-1;j>=1;j--){
               if(j%10==0){
                   continue;
               }
               s=to_string(j);
               sort(s.begin(),s.end());
                for(k=0;k<s.size();k++){
                    if(s[k]=='0'){
                        z=1;
                    }
                }
                if(z==1){
                    continue;
                }

               if(i+j==n){
                   ans.push_back(i);
                   ans.push_back(j);
                   x=1;
                   break;
               }
           }
           if(x==1){
               break;
           }

       }
        return ans;
    }
};
