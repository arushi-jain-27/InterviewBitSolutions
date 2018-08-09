/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int k) {
    ListNode* first=NULL, *start=NULL, *a=head, *prev=NULL;
    while (a)
    {

        if (a->val<k)
        {
            if (!first)
            {
                first=a;
                start=first;
                prev=a;
                a=a->next;
                //cout<<"%";
            }
            else if (first->next!=a)
            {
                //cout<<a->val<<" ";
                ListNode* t=a->next;
                if (prev)
                prev->next=t;
                else
                head=t;
                a->next=first->next;
                first->next=a;
                first=first->next;
                a=t;
            }
            else
            {
                //cout<<"$";
                first=first->next;
                prev=a;
                a=a->next;

            }
        }
       else
        {prev=a;
        a=a->next;}
    }


    a=head;
    if (a->val>=k && start)
    {
        while (a->next!=start)
        a=a->next;
        ListNode* t=first->next;
        a->next=t;
        first->next=head;
        head=start;
    }
    return head;

}
