class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int i,j;
        int count=0;
        vector<int>expected;
        int n=heights.size();
        int x;
        for(i=0;i<n;i++){
            x=heights[i];
            expected.push_back(x);
        }
        sort(expected.begin(),expected.end());
        for(i=0;i<n;i++){
           if(heights[i]!=expected[i]){
               count++;
           }
        }
        return count;
    }
};
