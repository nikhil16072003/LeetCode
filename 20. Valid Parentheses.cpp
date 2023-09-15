class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        int i;
        stack<int>ans;
        for(i=0;i<n;i++){
            if(s[i]==')' && ans.size()>0 && ans.top()=='('){
                ans.pop();
            }
            else if(s[i]=='}' && ans.size()>0 && ans.top()=='{'){
                ans.pop();
            }
            else if(s[i]==']' && ans.size()>0 && ans.top()=='['){
                ans.pop();
            }
            else{
                ans.push(s[i]);
            }
        }
        if(ans.size()==0){
            return true;
        }
        return false;
    }
};
