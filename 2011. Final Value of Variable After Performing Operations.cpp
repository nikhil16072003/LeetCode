class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int n=operations.size();
        int x=0;
        int i;
        for(i=0;i<n;i++){
            if(operations[i]=="--X" ||operations[i]=="X--"){
                x=x-1;
            }
            if(operations[i]=="X++"|| operations[i]=="++X"){
                x=x+1;
            }
        }
        return x;
        
    }
};
