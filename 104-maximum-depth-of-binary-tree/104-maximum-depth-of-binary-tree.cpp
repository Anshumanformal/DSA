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
    int maxDepth(TreeNode* root) {
        
        if(!root) return 0;
        
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        
        // we return 1 + max of the height of left and right subtree. We add 1 because the total height
        // of the tree is equal to just 1 more than the left and right subtree.
        return 1 + max(left,right);

    }
};