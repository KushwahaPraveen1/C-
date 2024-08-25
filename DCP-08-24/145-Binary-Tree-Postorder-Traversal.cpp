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
public:vector<int>vt;
vector<int>post(TreeNode*root)
{
if(!root)return vt;
post(root->left);
post(root->right);
vt.push_back(root->val);
return vt;
}
    vector<int> postorderTraversal(TreeNode* root) {
     return post(root);   
    }
};