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
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL || head->next==NULL)
                return head;

        ListNode* o=head;
        ListNode* e=head->next;

        ListNode* s=head;
        ListNode* l=head->next;
        while(1)
        {
            if(o->next->next==NULL)
                break;
            else
            {
                o->next=o->next->next;
                o=o->next;
            }
            if(e->next->next==NULL)
                break;
            else
            {
                e->next=e->next->next;
                e=e->next;
            }
        }
        o->next=l;
        e->next=NULL;

        return s;
    }
};
