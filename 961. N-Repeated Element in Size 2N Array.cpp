class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n1=nums.size();
        int n=n1/2;
        unordered_map<int,int>mp;
        int i;
        for(i=0;i<n1;i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second==n){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};
