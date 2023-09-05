class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>store;
        for(auto it:mp)
        {
            store.push_back({it.second,it.first});
        }
        sort(store.rbegin(),store.rend());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(store[i].second);
        }
        return ans;
    }
};
