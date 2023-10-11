class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

         string g="";
        for(int i=0;i<words.size();i++){
            string k=words[i];
            g=g+k[0];
                 
        }
        return s==g;
        
    }
};
