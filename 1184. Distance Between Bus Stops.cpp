class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total = 0;
         int i;
         int n=distance.size();
         for(i=0;i<n;i++){
             total=total+distance[i];
         }
        int ans = 0;
        if(start > destination){
            int tmp = start;
            start = destination;
            destination = tmp;
        }
        for(int i = start; i < destination; i++){
            ans += distance[i];
        }
        int anti=total-ans;
        if(anti>ans){
            return ans;
        }
        else{
            return anti;
        }
    }
};
