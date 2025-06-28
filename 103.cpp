class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == NULL) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool l_r = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);
            int index;
            for (int i = 0; i < size; i++) {
                TreeNode* front = q.front();
                q.pop();
                if (l_r) {
                    index = i;
                } else {
                    index = size - i - 1;
                }
                ans[index] = front->val;
                if (front->left) {
                    q.push(front->left);
                }
                if (front->right) {
                    q.push(front->right);
                }
            }
            l_r = !l_r;
            result.push_back(ans);
            
        }
        return result;
    }
};


