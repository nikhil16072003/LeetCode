class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
        vector<int>ans1;
        vector<int>ans2;
        int i,j;
      
        for(j=k+1;j<n;j++){
            ans2.push_back(nums[j]);
        }
        j=0;
        for(i=0;i<=k;i++){
            ans2.push_back(nums[i]);
        }
        for(i=0;i<n;i++){
            nums[i]=ans2[i];
        }
    }
};
////////////////
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + n - k);
        reverse(nums.begin() + n - k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
