/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* newnode (int k)
{
    ListNode* t= (ListNode*)malloc (sizeof(ListNode));
    t->val=k;
    t->next=NULL;
    return t;
}
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* head1=a, *head2=b, *preva=NULL;
    if (!head1)
    return head2;
    if (!head2)
    return head1;
    while (a && b)
    {
        if (a->val<b->val)
        {
            preva=a;
            a=a->next;

        }
        else
        {
            ListNode* temp=newnode (b->val);
            temp->next=a;
            if (!preva)
            {
                head1=temp;
                preva=head1;
            }
            else
           { preva->next=temp;
            preva=temp;}
            b=b->next;
        }
    }
    if (b)
    preva->next=b;


    return head1;

}
