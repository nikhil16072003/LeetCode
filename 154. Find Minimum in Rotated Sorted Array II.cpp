///using stl
class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
        
    }
};
//////using simple logic that in an array the 1st element in which arr[i]<arr[i-1] arr[i] is the min element of all the elements
//time complexity:O(n)
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        vector<int>ans;
        int index=0;
        for(i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                index=i;
                break;
            }
        }
      return nums[index];

        
    }
};
