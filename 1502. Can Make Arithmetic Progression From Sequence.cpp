class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i]-arr[i-1]!=diff)
                return false;
        }
        return true;
    }
};
///using formula 2b=a+c when abc are in ap
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int i;
        int n=arr.size();
        for(i=1;i<n-1;i++){
            if(2*arr[i]!=arr[i-1]+arr[i+1]){
                return false;
            }
        }
        return true;
    }
};
