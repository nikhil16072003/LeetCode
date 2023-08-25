///

class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> v;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')
                v.push_back(s[i]);
        }
        reverse(v.begin(), v.end());
        int rev = 0;
        for(int i = 0 ; i < s.length(); i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
              || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
                s[i] = v[rev];
                rev++;
            }
        }
        return s;
    }
};
/////Solution 2 using normal string///////////////////
class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int i;
        string ov="";
        
        for(i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                ov=ov+s[i];
            }
           
        }
        reverse(ov.begin(),ov.end());
        int n1=ov.length();
        int c=0;
        for(i=0;i<n;i++){
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                s[i]=ov[c];
                c++;
            }

        }
        return s;
    }
};
