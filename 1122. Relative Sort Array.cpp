class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(),arr1.end());
          vector<int> ans;
          vector<int>temp;
        int i;
        int j=0;
        int x;
        int n1=arr1.size();
        int n2=arr2.size();
        int flag=0;
         int y;
        for(i=0;i<n2;i++){
            for(j=0;j<n1;j++){
                y=arr1[j];
                if(arr1[j]==arr2[i]){
                    x=arr1[j];
                    ans.push_back(x);
                    flag=1;
                }

            }
            
        }
       int count=0;
       for(i=0;i<n1;i++){
           for(j=0;j<n2;j++){
               if(arr1[i]==arr2[j]){
                   count++;
               }
           }
           x=arr1[i];
           if(count==0){
               ans.push_back(x);
           }
           count=0;
       }
       return ans;
    }
};
