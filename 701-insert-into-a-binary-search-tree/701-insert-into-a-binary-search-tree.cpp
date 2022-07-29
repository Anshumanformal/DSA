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
    TreeNode* insertIntoBST(TreeNode* node, int x) {
         if(!node)
            return new TreeNode(x);
         if(node->val > x)
            node->left = insertIntoBST(node->left,x);
         else if(node->val < x)
            node->right = insertIntoBST(node->right,x);          
        
        return node;
    }
};