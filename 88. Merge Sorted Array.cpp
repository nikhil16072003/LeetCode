class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j;
        vector<int>ans;
        for(i=0;i<m;i++){
            ans.push_back(nums1[i]);
        }
        for(i=0;i<n;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        for(i=0;i<m+n;i++){
            nums1[i]=ans[i];
        }
        
    }
};
