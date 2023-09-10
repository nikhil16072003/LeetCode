/////////////////////////////////////////BEST SOLUTION FOR THE BEGINNERS//////////////////////////////////

class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int miniOper = INT_MAX ;
        for(int i=0; i<=blocks.size()-k; i++){
            int countW =0 , countB =0;
            
            for(int j=i; j<i+k; j++){
                if(blocks[j] == 'W')    countW++ ;
            }
            
            miniOper = min(miniOper, countW) ;
        }
        
        return miniOper ;
    }
}; 
///////////////////////////////////////CONCEPT IS LITTLE BIT HARD////////////////////////////////////////////////////
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int res=0,count=0;
        for(int i=0;i<k;i++)
        {
            if(blocks[i]=='B')
            count++;
        }
        res = max(res,count);
        for(int i=k;i<blocks.length();i++)
        {
            if(blocks[i]=='B'&&blocks[i-k]=='W')
            count++;
            if(blocks[i]=='W'&&blocks[i-k]=='B')
            count--;
            res = max(res,count);
        }
        return k-res;
    }
};
////////////////////////////////////////////////////////////////////
class Solution {
 public:
  int minimumRecolors(string blocks, int k) {
    int countB = 0;
    int maxCountB = 0;

    for (int i = 0; i < blocks.length(); ++i) {
      if (blocks[i] == 'B')
        ++countB;
      if (i >= k && blocks[i - k] == 'B')
        --countB;
      maxCountB = max(maxCountB, countB);
    }

    return k - maxCountB;
  }
};
