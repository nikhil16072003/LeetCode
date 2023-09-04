class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int i;
        int j;
        for(i=0;i<n;i++){
            j=nums[i];
            nums.push_back(j);
        }
        return nums;
        
    }
};
