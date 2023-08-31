class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v;
        vector<int>x;
        int n=arr.size();
        int j,i;
        int c;
        for(i=0;i<n;i++){
             c=arr[i];
             x.push_back(c);
        }
        int z=1;
        sort(x.begin(),x.end());
        int count=1;
       for(i=0;i<n;i++){
           for(j=0;j<n;j++){
                 if(arr[j]==x[i]){
                     
                     arr[j]=count;
                     count++;
                    
                 }
                
           }
       }

       
        
return arr;
        
    }
};
