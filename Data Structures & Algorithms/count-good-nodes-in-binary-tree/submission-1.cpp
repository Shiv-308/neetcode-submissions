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
    int count = 0;
    void help(TreeNode *root, int curr){
        if(!root) return;
        if(root->val >= curr){
            curr = root->val;
            count++;
        }
        help(root->left,curr);
        help(root->right,curr);
    }
    int goodNodes(TreeNode* root) {
        int curr = INT_MIN;
        help(root, curr);
        return count;
    }
};
