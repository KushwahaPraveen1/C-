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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* prev=head;
        ListNode* front=head->next;
        while(front!=nullptr)
        {
            ListNode* temp=new ListNode(__gcd(prev->val,front->val));
            prev->next=temp;
            temp->next=front;
            prev=front;
            front=front->next;
        }
        return head;
    }
};