class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>rev;
        int r=image.size();
        int c=image[0].size();
        int i,j;
        for(i=0;i<r;i++){
            vector<int>a;
            for(j=0;j<c;j++){
                a.push_back(image[i][j]);


            }
            reverse(a.begin(),a.end());
            rev.push_back(a);
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(rev[i][j]==0){
                    rev[i][j]=1;
                }
                else{
                    rev[i][j]=0;
                }
            }

        }
        return rev;
        
    }
};
