class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2){
            return 0;
        }
        int i,j;
        sort(nums.begin(),nums.end());
        int max=INT_MIN;
        int diff=0;
        for(i=0;i<n-1;i++){
            diff=nums[i+1]-nums[i];
            if(max<diff){
                max=diff;
            }

        }
        return max;
    }
};
