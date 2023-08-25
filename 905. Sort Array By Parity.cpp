class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        vector<int>v;
        vector<int>even;
        vector<int>odd;
        int x;
        for(i=0;i<n;i++){
            x=nums[i];
            if(x%2==0){
                
                even.push_back(x);
            }
            else{
                odd.push_back(x);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int n1=even.size();
        int n2=odd.size();
        for(i=0;i<n1;i++){
            x=even[i];
            v.push_back(x);
        }
        j=0;
        for(i=0;i<n2;i++){
            x=odd[j];
            v.push_back(x);
            j++;
        }
        return v;
    }
};
