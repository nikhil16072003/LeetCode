class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int  n=nums.size();
        int i,j;
        int count=0;
        for(i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
                }
          if (count > 1 || (i > 0 && i < n - 2 && nums[i - 1] > nums[i + 1] && nums[i] > nums[i + 2])) {
                    return false;
                }
                
        }
        return true;
        
    }
};
