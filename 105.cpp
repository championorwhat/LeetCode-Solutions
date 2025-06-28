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

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& pre_index, int in_index, int in_end) {
        if (pre_index >= preorder.size() || in_index > in_end) {
            return NULL;
        }
        int ele = preorder[pre_index++];
        TreeNode* temp = new TreeNode(ele);
        int pos = fpos(inorder, ele);

        temp->left = solve(preorder, inorder, pre_index, in_index, pos - 1);
        temp->right = solve(preorder, inorder, pre_index, pos + 1, in_end);
        return temp;
    }

    void preorderTraversal(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        result.push_back(root->val);
        preorderTraversal(root->left, result);
        preorderTraversal(root->right, result);
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pre_index = 0;
        TreeNode* ans = solve(preorder, inorder, pre_index, 0, inorder.size() - 1);
        return ans;
    }

    vector<int> getPreorderTraversal(TreeNode* root) {
        vector<int> result;
        preorderTraversal(root, result);
        return result;
    }
};
