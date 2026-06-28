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

    void small(TreeNode* root, int k, vector<int>& vec){
        if(root == NULL){
            return;
        }

        vec.push_back(root->val);

        small(root->left, k, vec);
        small(root->right, k, vec);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vec;
        small(root, k, vec);

        sort(vec.begin(), vec.end());
        return vec[k-1];
    }
};