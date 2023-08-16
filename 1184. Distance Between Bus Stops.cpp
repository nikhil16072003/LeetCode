class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int i,j;
        int clock=0;
        int anti=0;
        int total=0;
        int n=distance.size();
        for(i=0;i<n;i++){
             total=total+distance[i];
        }
        for(i=start;i<destination;i++){
            clock=clock+distance[i];
        }
        anti=total-clock;
        if(clock>anti){
            return anti;
        }
        else{
            return clock;
        }
        
    }
};
