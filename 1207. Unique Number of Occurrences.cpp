class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      
        int n=arr.size();
        int i,j,k;
        vector<int>freq;
        for(i=0;i<n;i++){
            freq.push_back(1);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    freq[i]++;
                    arr[j]=0;
            }
        }
        if(arr[i]==0){
            freq[i]=0;
        }
    }

    sort(freq.begin(),freq.end());
    int flag=0;
    for(i=0;i<n;i++){
      if(freq[i]==0){
          continue;
      }
      else{
           if(freq[i]==freq[i+1]){
               return false;
           }
      }
    }
      return true;  
    }
};
