class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       set<int>a;
       int i;
       int n=nums.size();
       for(i=0;i<n;i++){
           if(nums[i]>0){
               a.insert(nums[i]);
           }
       }
       vector<int>ans;
       for(auto i:a){
           ans.push_back(i);
       }
       int n1=ans.size();
       vector<int>temp;
       for(i=1;i<=n1;i++){
           temp.push_back(i);
       }
       for(i=0;i<n1;i++){
           if(ans[i]!=temp[i]){
               return temp[i];
           }
       }
       return i+1;
    }
};
