class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r=mat.size();
        int c=mat[0].size();
        int i,j;
        int count=0;
        vector<int>sol;
        vector<pair<int,int>>v;
        for(i=0;i<r;i++){
            count=0;
            for(j=0;j<c;j++){
                if(mat[i][j]==1){
                    count++;
                }

            }
            v.push_back(make_pair(count,i));
           

        }
        
        sort(v.begin(),v.end());
         for(i=0 ; i < k; i++)
        {
            sol.push_back(v[i].second);
        }
        
        return sol;

        
    }
};
