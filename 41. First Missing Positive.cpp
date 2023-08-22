//my version code

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int i;
        int last= nums[n];
        int laste=nums[n]+1;
        nums.push_back(laste);
        int extra=nums[n+1];
        
        

        int first= nums[0];

        if(first>1){
            return 1;
        }
        if(n+1==1 && nums[n]==1){
            return 2;
        }
        for(i=first;i<=last;i++){
            if(i<=0){
                continue;
            }
            if(nums[i]!=i){
                break;
            }
        }
        return i;
    }
};

/////////////////////////////////////////////////////////////////////////
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int i=1;
        int n=s.size();
        while(i<=n)
        {
            if(s.find(i)!=s.end())
            {
                i++;
            }
            else
            {
                return i;
            }
        }
        return n+1;
    }
};
//////////////////////////////////////////////////////////////////////
