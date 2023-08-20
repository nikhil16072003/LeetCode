class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int i;
        vector<int>v;
        for(i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0){
                v.push_back(count);
                count=0;
            }

        }
        v.push_back(count);
        sort(v.begin(),v.end());
        int len=v.size();
        return v[len-1];
        
        
    }
};
