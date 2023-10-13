class Solution {
public:
    int sumIf4(int number){
        int sum = 0;
        int count = 0;

        for(int i=1; i<=number; i++){
            if(number%i == 0){
                sum += i;
                count++;
            }
            if(count > 4){
                break;
            }
        }

        if(count == 4){
            return sum;
        }
        return 0;
    }

    int sumFourDivisors(vector<int>& nums) {
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            ans+=sumIf4(nums[i]);
        }
        return ans;
    }   
};
