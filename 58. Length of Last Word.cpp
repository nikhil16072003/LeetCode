//basic code in cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i;
        for(i = n-1;i>=0;i--){
            if(s[i] != ' ')
                break;
        }
        int j;
        for(j=i;j>=0;j--){
            if(s[j] == ' ')
                break;
        }
        return (i-j);
    }
};
//////////using trim it will remove the last and front space charecters in java
class Solution {
    public int lengthOfLastWord(String s) {
        int count = 0;
        s = s.trim();
        int start = s.length() - 1;
        for(int i=start; i >= 0; i--){
          if(s.charAt(i) == ' '){
                break;
            }
            
            count++;
        }
      
        return count;
    }
}
