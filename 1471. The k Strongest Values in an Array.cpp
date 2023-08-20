class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        vector<int>ans;
        int n=arr.size();
        int mid_in=(n-1)/2;
        int median=arr[mid_in];
        int i,j;
        int temp;
        int diff1,diff2;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
               if(arr[i]>median){
                  diff1=arr[i]-median;
               }
               else{
                   diff1=median-arr[i];
               }
                if(arr[j]>median){
                  diff2=arr[j]-median;
               }
               else{
                   diff2=median-arr[j];
               }
               if(diff1<=diff2){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
               }
            }

        }
        int z;
        for(i=0;i<k;i++){
            z=arr[i];
            v.push_back(z);
        }
        return v;
    }
};
//////////////////////////////////////sol-2///////////////////////////
class Solution {
public:
   vector<int> getStrongest(vector<int>& arr, int k) {
    sort(begin(arr), end(arr));
    int i = 0, j = arr.size() - 1;
    int med = arr[(arr.size() - 1) / 2];
    while (--k >= 0)
        if (med - arr[i] > arr[j] - med)
            ++i;  
        else
            --j;
    arr.erase(begin(arr) + i, begin(arr) + j + 1);
    return arr;
}
};
