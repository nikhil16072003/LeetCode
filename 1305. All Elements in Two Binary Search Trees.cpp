/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void get(vector<int> &ans, TreeNode* root){
    if(root==NULL){
        return;
    }
    get(ans,root->left);
    ans.push_back(root->val);
    get(ans,root->right);
}
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        get(ans,root1);
        get(ans,root2);
        sort(ans.begin(),ans.end());
        return ans;
       
        
    }
};
