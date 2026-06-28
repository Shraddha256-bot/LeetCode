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

    bool func(TreeNode* root, long long maxVal, long long minVal){
        if(root == NULL){
            return true;
        }

        if(root -> val <= minVal || root-> val >= maxVal){
            return false;
        }

        return func(root->left, root->val, minVal) && func(root->right, maxVal, root->val);
    }
    bool isValidBST(TreeNode* root) {
        return func(root, LLONG_MAX, LLONG_MIN);
    }
};