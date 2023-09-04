class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        vector<int>vec;
        long long sum=1;
        int cnt=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
         cnt++;
            }
            else{
               sum=sum*a[i]; 
            }
          
        }
        for(int i=0;i<n;i++){
            if(cnt>=2){
                vec.push_back(0);
            }
            else if(a[i]==0){
                vec.push_back(sum);
            }
            else{
                if(cnt==1){
                    vec.push_back(0);
                }
                else{
                   vec.push_back(sum/a[i]);
                }
       
            }
           
        }
        return vec;
         
        
    }
};
