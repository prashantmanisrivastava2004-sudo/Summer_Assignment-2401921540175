/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool mirror(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        if (!p || !q) {
            return false;
        }
        return (p->val == q->val) && mirror(p->left, q->right) &&
               mirror(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) {
            return true;
        }
        return mirror(root->left, root->right);
    }
};

// Time Complexity: O(n), where n is the number of nodes in the tree. We visit each node once.
// Space Complexity: O(h), where h is the height of the tree. This space is used by the recursion stack.