class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int x=nums.size()-1;
        int n=nums[x];
        for(i=0;i<=n;i++){
            
            if(nums[i]!=i){
                break;
            }
        }
        return i;
    }
};
