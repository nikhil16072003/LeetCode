class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n1=word1.size();
        int n2=word2.size();
        int i,j;
        string x="";
        string y="";
        for(i=0;i<n1;i++){
            x=x+word1[i];
        }
        for(i=0;i<n2;i++){
            y=y+word2[i];
        }
        if(x==y){
            return true;
        }
        return false;
    }
};
