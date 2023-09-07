class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      
    int i = 0;
    for (int n : nums)
        if (i < 2 || n > nums[i-2])
            nums[i++] = n;
    return i;

        
    }
};
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
