//cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i;
        for(i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
        
    }
};
//python
class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        j=0
        for i in nums:
            if(i==target):
                return j
            j=j+1
        return -1;

        
