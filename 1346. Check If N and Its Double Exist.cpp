class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        int i,j;
        int count=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                 
                if(arr[i]==(2*arr[j])  && i!=j){
                    count++;
                }
            }
        }
        if(count==0){
            return false;
        }
        return true;
        
    }
};
