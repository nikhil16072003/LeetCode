class Solution {
public:
void preorder(TreeNode* root,int &c){
    if(root==NULL){
        return;
    }
    preorder(root->left,c);
    preorder(root->right,c);
    c++;
}
    int countNodes(TreeNode* root) {
       int c=0;
       preorder(root,c);
       return c;
        
    }
};
///////////////////////////using inorder

class Solution {
public:
void inorder(TreeNode* root,int &c){
    if(root==NULL){
        return;
    }
    inorder(root->left,c);
    c++;
    inorder(root->right,c);

}
    int countNodes(TreeNode* root) {
        int c=0;
        inorder(root,c);
        return c;
        
    }
};
