class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]==target){
                return true;
            }
        }
        return false;
    }
};
