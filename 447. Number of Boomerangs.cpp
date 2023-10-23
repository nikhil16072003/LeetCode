class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int cnt=0;
          
        for (int i=0; i<points.size(); i++){
          map<int,int> mp; 
            for (int j=0; j<points.size(); j++){ 
                if (i!=j){
                    int dis= (points[i][1]-points[j][1])*(points[i][1]-points[j][1])+(points[i][0]-points[j][0])*(points[i][0]-points[j][0]);
                    mp[dis]++;
                }
            }
            for (auto val: mp){
                if(val.second>=2)
                cnt+= ((val.second)*(val.second-1)); 
            }
        }
        
        
        return cnt;
    }
};
