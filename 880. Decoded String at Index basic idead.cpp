#include <iostream>
using namespace std;
#include<string>
int main() {
    int i,n;
    string s = "a2345678999999999999999";
    int k = 1;
        string x="";
        string y;
        int j;
        string g;
        for(i=0;i<s.length();i++){
            if(isalpha(s[i])){
                x=x+s[i];
            }
            if(!isalpha(s[i])){
                y=x;
                
                g=s[i];
                j=stoi(g);
                for(n=0;n<j-1;n++){
                    x=x+y;
                }


            }
        }
        cout<<x[k-1];

    return 0;
}
