class Solution {
public:
    bool isSubPathFrom(TreeNode* root, ListNode* head) {
        if (head == nullptr) return true;
        if (root == nullptr) return false;

        if (root->val == head->val) {
            if (isSubPathFrom(root->left, head->next) || isSubPathFrom(root->right, head->next)) {
                return true;
            }
        }

        return false;
    }

    bool isSubPath(ListNode* head, TreeNode* root) {
        if (root == nullptr) return false;
        if (isSubPathFrom(root, head)) return true;
        return isSubPath(head, root->left) || isSubPath(head, root->right);
    }
};
