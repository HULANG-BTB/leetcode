/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size() - 1);
    }

    TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd) {
        if (preStart > preEnd) return NULL;
        int val = preorder[preStart];
        TreeNode* node = new TreeNode(val);
        int index = find(inorder.begin() + inStart, inorder.begin() + inEnd, val) - inorder.begin();
        node->left = buildTree(preorder, preStart + 1, preStart + (index - inStart), inorder, inStart, index - 1);
        node->right = buildTree(preorder, preStart + 1 + (index - inStart), preEnd, inorder, index + 1, inEnd);
        return node;
    }
};