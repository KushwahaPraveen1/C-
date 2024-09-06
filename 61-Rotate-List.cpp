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
    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        if(head==nullptr||head->next==nullptr)return head;
        if(k==0)return head;
        
        ListNode* temp=head;   ListNode* temp2=head;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        } while(temp2->next!=nullptr)
        {
            temp2=temp2->next;
        }   ListNode* temp3=head;
        k=k%len;if(k==0)return head;
        int x=len-k;
        
        temp=head;
        while(x>1)
        {temp=temp->next;
        x--;
        }
        temp3=temp->next;
        temp->next=nullptr;
        temp2->next=head;
        return temp3;
    }
};