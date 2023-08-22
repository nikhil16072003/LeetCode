//solution 1
class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x^y;
        
        int ans = 0;
        
        while(diff){
            ans += (diff&1);
            diff >>= 1;
        }
        
        return ans;
    }
};
//solution 2
class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x^y;
        
        int ans = 0;
       
        int i;
        string g=bitset<32>(diff).to_string();
        int n2=g.length();
        for(i=0;i<n2;i++){
            if(g[i]=='1'){
                ans++;
            }
        }
       
        
        return ans;
    }
};




//solution 3
class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x^y;
        
        int ans = 0;
        long long n=0;
        while(diff!=0){
             n=n*10+diff%2;
             diff=diff/2;

        }
        int i;
        string g=to_string(n);
        int n2=g.length();
        for(i=0;i<n2;i++){
            if(g[i]=='1'){
                ans++;
            }
        }
       
        
        return ans;
    }
};
