class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i,j;
        int count=0;
         int x=0;
        int n=nums.size();
        for(i=0;i<n;i++){
             if(nums[i]==target){
                 count++;
             }
        }
        if(count==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            for(i=0;i<n;i++){
                if(nums[i]==target && x==0 ){
                    ans.push_back(i);
                    x++;
                }
                if(nums[i]==target && nums[i]!=nums[i+1]){
                    ans.push_back(i);
                    break;
                }
            }
        }
       
        return ans;
        
    }
};
//////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n=nums.size();
       vector<int>ans;
       int i;
       sort(nums.begin(),nums.end());
       int count=0;
       for(i=0;i<n;i++){
           if(nums[i]==target){
               ans.push_back(i);
               count++;
               break;
           }
       }
       for(i=(n-1);i>=0;i--){
           if(nums[i]==target){
               ans.push_back(i);
               count++;
               break;
           }
       }

       if(count==0){
           ans.push_back(-1);
           ans.push_back(-1);
       }

       return ans;
    }
};
