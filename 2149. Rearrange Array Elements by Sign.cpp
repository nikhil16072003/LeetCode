class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int n=nums.size();
        int i,j;
        vector<int>v;
        vector<int>pos;
        vector<int>neg;
        int x;
        for(i=0;i<n;i++){
            x=nums[i];
            if(x>0){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }
        }
        int c=0;
        int d=0;
        for(i=0;i<n;i++){
            if(i%2==0){
                x=pos[c];
                v.push_back(x);
                c++;
            }
            else{
                x=neg[d];
                v.push_back(x);
                d++;
            }
        }
        return v;
    }
};
