class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans;
        vector<int>a;
        int m;
       int n=nums.size();
       int i,j;
      for(i=0;i<n;i++){
          ans.push_back(nums[i]);
      }
      for(i=0;i<n;i++){
          ans.push_back(nums[i]);
      }
      int n1=ans.size();
      for(i=0;i<n;i++){
          m=-1;
          for(j=i+1;j<n1;j++){
              if(nums[i]<ans[j]){
                  m=ans[j];
                  break;

              }
          }
          a.push_back(m);
      }
      return a;
    }
};
