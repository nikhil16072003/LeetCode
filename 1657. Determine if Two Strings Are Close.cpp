class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int>s1;
        unordered_map<char,int>s2;
        int n1=word1.length();
        int n2=word2.length();
        if(n1!=n2){
            return false;
        }
        int i;
        for(i=0;i<n1;i++){
            s1[word1[i]]++;
        }
          for(i=0;i<n2;i++){
            s2[word2[i]]++;
        }
        vector<int>w1;
        vector<int>w2;
        vector<char>c1;
        vector<char>c2;
        for(auto i:s1){
            w1.push_back(i.second);
            c1.push_back(i.first);
        }
         for(auto i:s2){
            w2.push_back(i.second);
            c2.push_back(i.first);
        }
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
      int  n=w1.size();
      n1=c1.size();
      n2=c2.size();
      if(n1!=n2){
          return false;
      }
      for(i=0;i<n1;i++){
          if(c1[i]!=c2[i]){
              return false;
          }
      }
        for(i=0;i<n;i++){
            if(w1[i]!=w2[i]){
                return false;
            }
        }

       return true;
        
    }
};
