class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int i,j;
        int k;
        int x;
        string s;
        string ans;
        int count=0;
        for(i=0;i<n;i++){
           s=details[i];
           
           k=stoi(s.substr(11,2));
           if(k>60){
               count++;
           }


        }
        return count;
        
    }
};
