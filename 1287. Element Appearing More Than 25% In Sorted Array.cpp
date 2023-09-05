class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>ans;
        int n=arr.size();
        int i,j;
        for(auto i:arr){
            ans[i]++;
        }
        double m = arr.size()*(25.00/100.00);
       for(auto i:ans){
           if(i.second>m){
               return i.first;
           }
       }
        return -1;
        
    }
};
