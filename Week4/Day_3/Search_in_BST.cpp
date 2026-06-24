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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        if(root->val > val){
           return searchBST(root->left, val);
        }else{
           return searchBST(root->right, val);
        }
    }
};

// Time Complexity: O(h) where h is the height of the tree. In the worst case, it can be O(n) for a skewed tree.
// Space Complexity: O(h) due to the recursion stack. In the worst case, it can be O(n) for a skewed tree.