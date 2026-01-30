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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root -> right == NULL && root-> left == NULL){
            return 1;
        }
        int x = minDepth(root -> right);
        int y = minDepth(root -> left);

        if (root -> left == NULL){
            return x + 1;
        }
        if (root -> right == NULL){
            return y + 1;
        }
        return min(x,y) + 1;
    }
};