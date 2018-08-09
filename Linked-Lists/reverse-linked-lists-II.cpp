/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* reverse (ListNode* head)
{
    ListNode* curr=head->next;
    ListNode* prev=head;
    ListNode* trail;
    while (curr)
    {
        trail=curr->next;
        curr->next=prev;

        prev=curr;
        curr=trail;
    }
    head->next=NULL;
    return prev;
}
ListNode* Solution::reverseBetween(ListNode* head, int b, int c) {
    if (b==c)
    return head;
    int i=1;
    ListNode* startprev, *start, *endnext, *end, *prev=NULL, *curr=head;
    while (curr)
    {
        if (i==b)
        {
           startprev=prev;
           start=curr;


        }
        else if (i==c)
        {
            end=curr;
            endnext=curr->next;

            break;
        }
         i++;
        prev=curr;
        curr=curr->next;

    }
    end->next=NULL;

    ListNode* ptr=reverse (start);
    ListNode* a=ptr;
    while (a->next)
    a=a->next;
    a->next=endnext;
    if (!startprev)
    return ptr;
    startprev->next=ptr;
    return head;


}
