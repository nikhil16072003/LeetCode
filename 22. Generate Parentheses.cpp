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
////////////////////////////////////
Solution 2
class Solution {
    
public:
void solve(int cnt1,int cnt2,int n,vector<string>&ans,string &op,int ind){
        if(ind>=n*2){
            ans.push_back(op);
            return;
        }
        if(cnt1<n && ind<2*n-1){
            op=op+'(';
            solve(cnt1+1,cnt2,n,ans,op,ind+1);
            op.pop_back();
        }
        if(cnt2<cnt1 && ind>0){
            op=op+')';
            solve(cnt1,cnt2+1,n,ans,op,ind+1);
            op.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string op="";
        vector<string>ans;
        solve(0,0,n,ans,op,0);
        return ans;
        
    }
};
