class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      string a="";
      int i=0;
      while(i<word1.length()||i<word2.length()){
          if(i<word1.length()){
               a=a+word1[i];
            }
          if(i<word2.length()){
               a=a+word2[i];
            }
           i++;

      }
      return a;
    }
};
