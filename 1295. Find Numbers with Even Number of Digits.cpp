class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int i;
        string s;
        int count=0;
        int k;
        for(i=0;i<n;i++){
            k=nums[i];
            s=to_string(k);
            if(s.length()%2==0){
                count++;
            }
            
        }
        return count;
    }
};
