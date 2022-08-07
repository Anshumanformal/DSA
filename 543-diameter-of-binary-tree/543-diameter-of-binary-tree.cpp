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
    
    int height(TreeNode* root){
        if(root == nullptr)
            return 0;

        // If tree is not empty then height = 1 + max of left
        // height and right heights
        return 1 + max(height(root->left), height(root->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)
            return 0;
    
        int lheight = height(root->left);
        int rheight = height(root->right);

        int ldiameter = diameterOfBinaryTree(root->left);
        int rdiameter = diameterOfBinaryTree(root->right);

        return max(lheight + rheight,
                  max(ldiameter, rdiameter)   
                 );
        }
};