//Brute force
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        int i,j,k;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<n;k++){
                    if(i<j && j<k && nums[i]<nums[k] && nums[k]<nums[j]){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
//////////////////////////////
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int s3 = INT_MIN;
        stack<int> st;
        for( int i = nums.size()-1; i >= 0; i -- ){
            if( nums[i] < s3 ) return true;
            else while( !st.empty() && nums[i] > st.top() ){ 
              s3 = st.top(); st.pop(); 
            }
            st.push(nums[i]);
        }
        return false;
    }
};
