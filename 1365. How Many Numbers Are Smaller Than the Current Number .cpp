class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        vector<int>c;
        int count=0;
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(i!=j && nums[i]>nums[j] ){
                    count++;
                }

            }
            c.push_back(count);
        }
        return c;
        
    }
};
