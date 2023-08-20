class Solution {
public:
    int maximum69Number (int num) {
        string  a;
        a=to_string(num);
        int n=a.length();
        int m;
        int i;
        int max_num=num;
        string s=a;
        for(i=0;i<n;i++){
            if(a[i]=='9'){
                a[i]='6';
            }
            if(a[i]=='6'){
                a[i]='9';
            }
            m=stoi(a);
            if(max_num<m){
                max_num=m;
            }
            a=s;
        }
        return max_num;
    }
};
