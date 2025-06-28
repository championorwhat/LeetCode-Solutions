int height(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    if (left == -1 || right == -1) {
        return -1;
    }
    int mx = max(left, right) + 1;
    if (abs(left-right) > 1) {
        return -1;
    }
    return mx;
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        // if (root == NULL) {
        //     return true;
        // }
        return height(root) != -1;
    }
};
