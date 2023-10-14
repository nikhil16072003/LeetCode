class Solution {
public:
    int reachNumber(int target) {
        target=abs(target);
       int i=1;
       int sum=0;
        int steps=0;
        while(sum!=target){
           sum=sum+i;
           i++;
           steps++;
           if(sum>target && (sum-target)%2==0){
               return steps;
           }

            
        }
        return steps;
    }
};
