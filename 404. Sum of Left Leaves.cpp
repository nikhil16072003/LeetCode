/////////////
class Solution {
    int sum=0;
public:
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root!=NULL){
            if(root->left!=NULL &&root->left->left==NULL && root->left->right==NULL){
                sum=sum+root->left->val;
            }
            sumOfLeftLeaves(root->left);
            sumOfLeftLeaves(root->right);
            
        }
       
        
         return sum;
        
    }
};
/////////////////////////////////////////////////////////

class Solution {
public:
void sumall(TreeNode* root,int& sum )
{
    if(root==NULL)
    {
        return ;
    }
     if(root->left!=NULL && root->left->right==NULL && root->left->left==NULL)
    {
        sum=sum+root->left->val;
    }
    sumall(root->left,sum);
    sumall(root->right,sum);
}
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        sumall(root,sum);
        return sum;
    }
};
