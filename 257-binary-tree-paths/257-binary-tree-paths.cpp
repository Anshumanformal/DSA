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
    
    void construct_root_to_leaf_path(vector<string>& result, TreeNode* root, string val){
        if(!root->left and !root->right){
            result.push_back(val);
            return;
        }
        
        // the binary tree has both left and right subtree
        if(root->left)
            construct_root_to_leaf_path(result, root->left, val + "->" + to_string(root->left->val));
        if(root->right)
            construct_root_to_leaf_path(result, root->right, val + "->" + to_string(root->right->val));
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if(!root) return result;
        
        construct_root_to_leaf_path(result, root, to_string(root->val));
        
        return result;
    }
};