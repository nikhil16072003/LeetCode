/////////////////
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int  max_ending_here = 1;
        
 
    for (int i = 0; i < nums.size(); i++) {
        max_ending_here = max_ending_here * nums[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
       if (max_ending_here == 0)
            max_ending_here = 1;
    }
    sort(nums.begin(),nums.end());
    int n=nums.size();

    if(nums[n-1]>max_so_far){
      max_so_far=nums[n-1];

    }
    return max_so_far;
    }
};
////////////////////////////////////////////////////////////

    class Solution {
public:
    
    int maxProduct(vector<int>& nums) {
        int pre=1;
        int suff=1;
        int n=nums.size();
        int maxprod=INT_MIN;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(suff==0) suff=1;
            pre*=nums[i];
            suff*=nums[n-i-1];
            maxprod=max(maxprod,(max(pre,suff))); 
        }
        return maxprod;
    }
};
