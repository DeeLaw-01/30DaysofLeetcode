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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndexMap[inorder[i]] = i;
        }
        return buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inorderIndexMap);
    }

    TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd,
                        vector<int>& inorder, int inStart, int inEnd,
                        unordered_map<int, int>& inorderIndexMap) {
        if (preStart > preEnd || inStart > inEnd) {
            return nullptr; // Base case: empty subtree
        }

        int rootVal = preorder[preStart]; // Root value is the first element of preorder traversal
        TreeNode* root = new TreeNode(rootVal);

        int rootIndexInorder = inorderIndexMap[rootVal]; // Find root index in inorder traversal

        int leftSubtreeSize = rootIndexInorder - inStart; // Size of left subtree in inorder traversal

        // Recursively construct left and right subtrees
        root->left = buildTree(preorder, preStart + 1, preStart + leftSubtreeSize,
                               inorder, inStart, rootIndexInorder - 1, inorderIndexMap);
        root->right = buildTree(preorder, preStart + leftSubtreeSize + 1, preEnd,
                                inorder, rootIndexInorder + 1, inEnd, inorderIndexMap);

        return root;
    }
};