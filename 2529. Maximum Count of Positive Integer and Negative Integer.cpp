class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=0,p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                p++;
            }
            if(nums[i]<0){
                n++;
            }
        }
        return max(p,n);
        


    }
};





\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\solution 2///////////////////////////////////////////////
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int max;
        int pos=0;
        int neg=0;
        int n=nums.size();
        set<int>posi;
        set<int>negi;
        for(int i=0;i<n;i++){
            if(nums[i]>0 ){
                pos=nums[i];
                posi.insert(pos);
            }
            if(nums[i]<0){
                neg=nums[i];
                negi.insert(neg);
            }
        }
        pos=posi.size();
        neg=negi.size();
        if(pos>neg){
            max=pos;
        }
        else{
            max=neg;
        }
        return max;
    }
};
