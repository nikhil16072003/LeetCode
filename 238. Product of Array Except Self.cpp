class Solution {
public:
    vector<int>leftProduct(vector<int>nums,int n){
        vector<int>ans;
        int product=1;
        for(int i=0;i<n;i++){
            product=product*nums[i];
            ans.push_back(product);
        }
        return ans;
    }
    vector<int>rightProduct(vector<int>nums,int n){
        vector<int>ans;
        int product=1;
        for(int i=n-1;i>=0;i--){
            product=product*nums[i];
            ans.push_back(product);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
      int n=nums.size();
      vector<int>left=leftProduct(nums,n);
      vector<int>right=rightProduct(nums,n);
      vector<int> result;
      for(int i=0;i<n;i++){
          if(i==0){
              result.push_back(right[1]);
          }
          else if(i==n-1){
              result.push_back(left[i-1]);
          }
          else{
              result.push_back(right[i+1] * left[i-1]);
          }
      }
      return result;
    }
};
