//Optimized Approach - O(n^2 logn + nlogn) - o(n^2 logn) time and O(n) space
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for(auto triplets : s)
            output.push_back(triplets);
        return output;
    }
};
//method 2

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>v;
        for(int i=0;i<nums.size();++i)
        {
            for(int j=i+1;j<nums.size();++j)
            {
                if(i!=j&&mp.find(-nums[i]-nums[j])!=mp.end()&&mp[-nums[i]-nums[j]]!=i&&mp[-nums[i]-nums[j]]!=j)
                {
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(-nums[i]-nums[j]);
                    sort(v.begin(),v.end());
                    st.insert(v);
                    v.clear();
                }
                mp[nums[j]]=j;
            }
        }
        for(auto i:st)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
///brute force
/*

    Time Complexity : O(N^3), Here three nested loop creates the time complexity. Where N is the size of the
    array(nums).

    Space Complexity : O(N), Hash Table(set) space.

    Solved using Array(Three Nested Loop) + Sorting + Hash Table(set). Brute Force Approach.

    Note : this will give TLE.

*/


/***************************************** Approach 1 *****************************************/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){
                    if((nums[i] + nums[j] + nums[k] == 0) && i != j && j != k && k != i){
                        set.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};










