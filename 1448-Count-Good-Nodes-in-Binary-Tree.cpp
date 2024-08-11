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
    int goodNodes(TreeNode* root) {
        int cnt=0;
        if(root==nullptr)return cnt;
        count(root,cnt,root->val);
        return cnt;
    }
    void count(TreeNode* root,int &cnt,int maxi)
    {if(root==nullptr)return;
    if(root->val>=maxi)
    {
        cnt++;
        maxi=root->val;
    }
    count(root->left,cnt,maxi);
    count(root->right,cnt,maxi);

    }
};