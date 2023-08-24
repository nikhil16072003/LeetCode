class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int i;
        int sum=0;
        int n=nums.size();
        int x;
        for(i=0;i<n;i++){
            x=i+1;
            if(n%x==0){
                sum=sum+(nums[i] * nums[i]);
            }
        }
        return sum;
    }
};
