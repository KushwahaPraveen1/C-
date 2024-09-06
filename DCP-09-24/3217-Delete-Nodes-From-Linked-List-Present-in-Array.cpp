/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(auto it:nums)
        st.insert(it);

        ListNode* temp=head;
        while(temp!=nullptr&& st.find(temp->val)!=st.end())
        {temp=temp->next;
        head=head->next;}
        while(temp!=nullptr&&temp->next!=nullptr)
        {
            if(st.find(temp->next->val)==st.end())
            temp=temp->next;
            else
            temp->next=temp->next->next;
        }return head;
    }
};