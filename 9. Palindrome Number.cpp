class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long rev=0;
        long long temp=x;
        int di;
        while(temp!=0){
            di=temp%10;
            rev=rev*10+di;
            temp=temp/10;

        }
        if(x==rev){
            return true;
        }
        return false;
    }
};
