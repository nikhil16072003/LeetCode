class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int i;
        int n=goal.length();
        int count=0;
        vector<string>x;
        vector<string>y;
        int same;
        string f,g;
         if (s == goal && set<char>(s.begin(), s.end()).size() < s.length())
             return true;
        for(i=0;i<n;i++){
            if(s[i]!=goal[i]){
                count++;
                f=s[i];
                g=goal[i];
                x.push_back(f);
                y.push_back(g);
            }
        }
        if(count==2 && x[0]==y[1] && x[1]==y[0]){
            return true;
        }
       else{
           return false;
       }
        
    }
};
