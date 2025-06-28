class Solution {
public:
    int fpos(vector<int>& inorder, int ele) {
        for (int i = 0; i < inorder.size(); i++) {
            if (inorder[i] == ele) {
                return i;
            }
        }
        return -1;
    }

    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int& post_index, int in_index, int in_end) {
        if (post_index < 0 || in_index > in_end) {
            return NULL;
        }
        int ele = postorder[post_index--];
        TreeNode* temp = new TreeNode(ele);
        int pos = fpos(inorder, ele);

        temp->right = solve(postorder, inorder, post_index, pos + 1, in_end);
        temp->left = solve(postorder, inorder, post_index, in_index, pos - 1);
        return temp;
    }

    void preorderTraversal(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        result.push_back(root->val);
        preorderTraversal(root->left, result);
        preorderTraversal(root->right, result);
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int post_index = postorder.size()-1;
        TreeNode* ans = solve(postorder, inorder, post_index, 0, inorder.size() - 1);
        return ans;
    }

    vector<int> getPreorderTraversal(TreeNode* root) {
        vector<int> result;
        preorderTraversal(root, result);
        return result;
    }
};
