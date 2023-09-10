//its runs with 100% beats
//Time complexity is O(n^2)
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        int count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
            }
        }
        return count;
    }
};
//////////////////another solution same as before solution but slight difference /////////////////////////////////////
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j;
        int count=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(nums[i]+nums[j]<target){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        return count;
    }
};
