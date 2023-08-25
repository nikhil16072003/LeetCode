class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        int i,j;
        vector<int>v;
        vector<int>even;
        vector<int>odd;
        int x;
        for(i=0;i<n;i++){
            x=nums[i];
            if(i%2==0){
                 even.push_back(x);
            }
            else{
                 odd.push_back(x);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int n1=even.size();
        int n2=odd.size();
        int n3=n1+n2;
        int c=0;
        int d=0;
        for(i=0;i<n3;i++){
            if(i%2==0){
               x=even[c];
                v.push_back(x);
                c++;
            }
            else{
                x=odd[d];
                v.push_back(x);
                d++;
            }
        }
        return v;
    }
};
