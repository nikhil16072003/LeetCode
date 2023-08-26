//with time complexity O(n^2)


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i,j;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]==nums[j] && abs((i-j))<=k){
                    return true;
                }
            }
        }
        return false;
    }
};
///optimised solution
