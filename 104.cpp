int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int m=max(left,right)+1;
    return m;
}

class Solution {
public:
    int maxDepth(TreeNode* root) {
        return height(root);
    }
};
