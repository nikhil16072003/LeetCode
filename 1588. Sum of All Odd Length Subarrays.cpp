class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int l= arr.size();
       int sum=0;
       for(int i=0;i<l;i++){
           sum=sum+(((i+1)*(l-i)+1)/2)*arr[i];
           
       }
       return sum;
    }
};
