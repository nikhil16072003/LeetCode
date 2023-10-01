class Solution {
public:
    
    int minOperations(vector<int>& nums) {
     
        int n = nums.size();
        int cnt = 0;
        unordered_map<int,int> mp;
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++; //getting the freq of all elements
        }
        
        for(auto it: mp){
            int val = it.second;
            
            if(val==1){
                return -1;
            } 
            
            if(val%3==0){
                cnt=cnt+(val/3);
            }
            else{
                if(val%3==1 || val%3==2){
                    cnt =cnt+ val/3 + 1;
                } 
               
            }
        }
        
        return cnt;
        
    }
};
