//basicc solution with O(n^2) time complexity
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max=INT_MIN;
        int i,j;
        int n=nums.size();
        int x;
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                x=nums[i]^nums[j];
                if(max<x){
                    max=x;
                }
            }
        }
        return max;
        
    }
};
