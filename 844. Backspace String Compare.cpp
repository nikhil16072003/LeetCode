class Solution {
public:
string process(string str){
    string processed;
    for(char c:str){
        if(c=='#' && processed.empty()==false){
            processed.pop_back();

        }
        else if(c!='#'){
            processed.push_back(c);
        }
    }
    return processed;
}
    bool backspaceCompare(string s, string t) {
       return process(s)==process(t);
        
    }
};
