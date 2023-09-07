class Solution {
    public int removeDuplicates(int[] nums) {
     if(nums.length<3) return nums.length;
     int index=2;
     for(int i=2;i<nums.length;i++)
     {
         if(nums[i]!=nums[index-2])
         {
             nums[index++] = nums[i];
         }
     }
    return index;    
    }
}
///////////this code is for to know the length of the array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>ans;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++){
            ans[nums[i]]++;
        }
        int sum=0;
        for(auto i:ans){
            if(i.second<=2){
                sum=sum+i.second;
            }
            else{
                sum=sum+2;
            }
        }
        return sum;
        
    }
};
