class Solution {
public:
    int findComplement(int num) {
       vector<int> val;
        while(num > 0){
            val.push_back(num % 2);
            num /= 2;
        }
        reverse(val.begin(), val.end());
        for(int i = 0; i < val.size(); i++)
            if(val[i] == 0){
                val[i] = 1;

            }
            else{
                val[i] = 0;

            }
        
        int ans = 0;
        long int base = 1;
        for(int i = val.size()-1; i >= 0; i--){
            if(val[i] == 1){
                ans += val[i]*base;

            }
            
            base *= 2;
        }
        return ans;
    }
};
