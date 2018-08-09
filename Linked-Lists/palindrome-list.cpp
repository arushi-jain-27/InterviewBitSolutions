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
int Solution::lPalin(ListNode* head) {
    ListNode* a=head;
    int count=0;
    while (a)
    {
        count++;
        a=a->next;
    }
    if (count<=1)
    return 1;
    int i=1;

    a=head;
    while (i<count/2)
    {
        i++;
        a=a->next;
    }

    a->next=reverse(a->next);

    ListNode* ptr=a->next;


    a=head;
    i=1;
    while (i<=count/2)
    {
        if (a->val!=ptr->val)
        return 0;
        i++;
        a=a->next;
        ptr=ptr->next;
    }
    return 1;




}
