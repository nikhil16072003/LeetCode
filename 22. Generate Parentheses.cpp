class Solution {
public:
    void solve(int open,int close,string output,vector<string>&arr){
       if(open==0 && close==0){
           arr.push_back(output);
           return;
       }
       if(open>0){
           string temp=output;
           temp=temp+"(";
           solve(open-1,close,temp,arr);
       }
       if(close>0 && close>open){
           string temp=output;
           temp=temp+")";
           solve(open,close-1,temp,arr);
       }
    }
    vector<string> generateParenthesis(int n) {

        vector<string>arr;
        int open=n;
        int close=n;
        string output="";
        solve(open,close,output,arr);

        return arr;
        
    }
};
