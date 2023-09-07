/////Basic way but some mistake in this
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>ans;

        int i;
        for(i=0;i<n;i++){
            ans[nums[i]]++;
        }
        vector<pair<int,int>>ans1;
        for(auto i:ans){
            ans1.push_back({i.second,i.first});

        }
        int j;
        sort(ans1.begin(),ans1.end());
        vector<int>anss;
        for(auto i:ans1){
            for(j=0;j<i.first;j++)
            anss.push_back(i.second);
        }
        
        return anss;
        
        
    }
};
/////////////////
class Solution {
public:
    
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    
    
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size()==1) 
            return nums;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) 
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> val_freq;
        for(auto m : mp) 
        {
            val_freq.push_back(m);
        }
        sort(val_freq.begin(),val_freq.end(),cmp);
        vector<int> result;
        for(auto v : val_freq) {
            for(int i=0;i<v.second;i++) {
                result.push_back(v.first);
            }
        }
        return result;
    }
};
