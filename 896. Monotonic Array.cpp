class Solution {
public:
bool isincreasing(vector<int>& nums){
    int i;
    int n=nums.size();
     for(i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
                
            }
        }
        return true;

}
bool isdecreasing(vector<int>& nums){
    int i;
    int n=nums.size();
     for(i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                return false;
                
            }
        }
        return true;

}
    bool isMonotonic(vector<int>& nums) {
    if(isincreasing(nums) ==true|| isdecreasing(nums) ==true){
            return true;
        }
        return false;
    }
};
