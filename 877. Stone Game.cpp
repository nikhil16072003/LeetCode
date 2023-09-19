//actual solution
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alice=0;
        int bob=0;
        int n=piles.size();
        int i;
        for(i=0;i<n/2;i++){
            if(i%2==0){
                if(piles[i]>piles[n-1-i]){
                    alice=alice+piles[i];
                    piles[i]=INT_MIN;
                }
                else{
                    alice=alice+piles[n-1-i];
                    piles[n-1-i]=INT_MIN;
                }
            }
            else{
                 if(piles[i]>piles[n-1-i]){
                    bob=bob+piles[i];
                    piles[i]=0;
                }
                else{
                    bob=bob+piles[n-1-i];
                    piles[n-1-i]=0;
                }

            }
        }
        if(alice>bob){
            return true;
        }
        return false;
        
    }
};
///////////////leetcode sol/////i feel like some thing is missing in this question
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};
