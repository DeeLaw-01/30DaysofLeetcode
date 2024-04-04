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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> nodes;
        TreeNode* current = root;
        int count = 0;
        
        while (current || !nodes.empty()) {
            while (current) {
                nodes.push(current);
                current = current->left;
            }
            current = nodes.top();
            nodes.pop();
            if (++count == k) {
                return current->val;
            }
            current = current->right;
        }
        
        return -1; // Not found
    }
};