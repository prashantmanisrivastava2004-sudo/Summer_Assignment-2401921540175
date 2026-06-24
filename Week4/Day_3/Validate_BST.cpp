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
    bool helper(TreeNode* root, TreeNode* min, TreeNode* max){
        if(!root){
            return true;
        }
        if(min && root->val <= min->val){
            return false;
        }
        if(max && root->val >= max->val){
            return false;
        }
        return helper(root->left, min, root) && helper(root->right, root, max);
    }
    bool isValidBST(TreeNode* root) {
         return helper(root, NULL, NULL);
    }
};

// Time Complexity: O(n) where n is the number of nodes in the tree. We visit each node once.
// Space Complexity: O(h) where h is the height of the tree. In the worst case, it can be O(n) for a skewed tree due to the recursion stack.