/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* head) {
    ListNode* a=head->next;
    ListNode* b=head;
    ListNode* prev=NULL;
    ListNode* ptr=head;
    while (a )
    {
        //cout<<a->val;
        int temp=a->val;
        b=head;
        prev=NULL;
        while (b->next!=a && b->val<temp)
            {
                prev=b;
                b=b->next;
            }
        if (b->val>temp)
        {
            ListNode* t=a;
            a=a->next;
            ptr->next=a;
            t->next=b;
            if (prev)
                prev->next=t;
            else
                head=t;


        }
        else
        {
            ptr=a;
            a=a->next;
        }
    }
    return head;

}
