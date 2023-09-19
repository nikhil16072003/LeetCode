class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        int i,j;
         int n=arr.size();
    vector<int>a;
    for(i=0;i<arr.size();i++){
        a.push_back(arr[i]);
    }
    sort(a.begin(),a.end());
    
    if(a[n-1]==arr[0]){
        return false;
    }
       int maxp=0;
      int flag=0;
      for(i=0;i<n-1;i++){
           if(arr[i]==arr[i+1]){
               flag=1;
               break;
           }
      }
       
       for(i=0;i<n-1;i++){
           if(arr[i]>arr[i+1]){
               maxp=i;
        
               

               break;

           }
          
       }
       if(maxp==n-1 ||maxp==0){
           return false;
       }
       for(i=maxp;i<n-1;i++){
           if(arr[i]<arr[i+1]){
               return false;
           }
       }
       if(flag==1){
           return false;
       }
        return true;
    }
};
