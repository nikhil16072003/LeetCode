//kth occurence quiery
#include <iostream>
using namespace std;
#include<vector>
int main() {
   int n;
   cin>>n;
   int s;
   int m;

vector<int>po;
   vector<int>arr;
   vector<int>query;
   vector<int>ans;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   cin>>s;
   cin>>m;
   for(int i=0;i<m;i++){
       int x;
       cin>>x;
       query.push_back(x);
       
   }
   for(int i=0;i<n;i++){
       if(arr[i]==s){
           po.push_back(i);
       }
   
   }
   for(int i=0;i<m;i++){
       if(query[i]>po.size()){
           ans.push_back(-1);
       }
       else{
           int v=query[i]-1;
           ans.push_back(po[v]+1);
       }
   }
   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
    return 0;
}
