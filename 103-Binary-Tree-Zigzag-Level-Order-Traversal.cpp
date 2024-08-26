class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;bool flag=true;
        queue<TreeNode*>q;
        q.push(root);
        if(root==nullptr)return ans;
        while(1)
        {
            int size=q.size();
            if(size==0)return ans;
            vector<int>data;
            
            for(int i=0;i<size;i++)
            {
                TreeNode*temp=q.front();
            q.pop();
            data.push_back(temp->val);
               
                 if(temp->left)q.push(temp->left);
                 if(temp->right)q.push(temp->right);
              
            }
            if(flag==false)
            reverse(data.begin(),data.end());
            flag=!flag;
            ans.push_back(data);
        }
        return ans;
    }
};
