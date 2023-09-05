class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>nums1;
        vector<int>nums2;
        int i;
        for(i=0;i<n;i++){
            nums1.push_back(nums[i]);
        }
        int n2=2*n;
        int j=0;
        for(i=n;i<n2;i++){
            nums2.push_back(nums[i]);
        }
        vector<int>ans;
        for(i=0;i<n;i++){

         ans.push_back(nums1[i]);
         ans.push_back(nums2[i]);
        }
        return ans;
    }
};
