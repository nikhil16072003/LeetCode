class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i;
        int n=nums.size();
        unordered_map<int,int>ans;
        int answer;
        for(i=0;i<n;i++){
            ans[nums[i]]++;
            
        }
        for(auto i:ans){
            if(i.second==1){
                answer=i.first;
                break;
            }

        }
        return answer;
    }
};
