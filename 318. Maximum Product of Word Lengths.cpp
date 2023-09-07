/////////167/168 test cases passed due to O(N^4) time complexity that remaining 1 test case didnt passed
class Solution {
public:
bool same(string s,string s2){
    int i;
    int j;
    int n1=s.length();
    int n2=s2.length();
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(s[i]==s2[j]){
                return true;
            }
        }

    }
    return false;
}
int maxProduct(vector<string>& words) {
        int n=words.size();
        int i,j;
        int k,l;
        int max=0;
        int curr=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(same(words[i],words[j])==false){
                    curr=words[i].length()*words[j].length();
                    if(max<=curr){
                        max=curr;
                    }

                    
                }
                
            }
        }
        return max;
    }
};
//////////////////////////correct solution

class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxLength = 0;
        vector<int> mask(words.size(), 0);

        for(int i =0 ;i<words.size(); i++){
            for(char ch: words[i]){
                mask[i] |= (1 << (ch-'a'));
            }
        }

        for(int i =0; i<words.size(); i++){
            for(int j = i+1; j<words.size(); j++){
                if((mask[i] & mask[j]) == 0){

                
                int product = words[i].length() * words[j].length();
                maxLength = max(maxLength, product);
            }
            }
        }
    
    return maxLength;
    }
};
