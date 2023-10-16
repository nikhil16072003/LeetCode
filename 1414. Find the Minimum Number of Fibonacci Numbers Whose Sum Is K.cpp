class Solution 
{
public:
    int f(vector<int> &v, int k)
    {
        if(k<=0)
         return 0;


        for(int x=0; x<v.size(); x++)
        {
            if(v[x]<=k)
            {
                return 1+f(v,k-v[x]);
            }
        }
        return 0;
    }
    int findMinFibonacciNumbers(int k) 
    {
        int a=1, b=1;
        vector<int> v;
        v.push_back(1);
        while(b<=k)
        {
            v.push_back(b+a);
            int t=a+b;
            a=b;
            b=t;
        }
        sort(v.begin(),v.end(),greater<int>());
        return f(v,k);
    }
};
