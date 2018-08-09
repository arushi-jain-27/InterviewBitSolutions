/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* a, int k) {
    int n=0;
    ListNode* head=a;
    while (a)
    {
        n++;
        a=a->next;
    }
    k=k%n;
    if (k==0)
    return head;
    a=head;
    k=n-k;
    n=1;
    while (n<k)
    {
        n++;
        a=a->next;
    }
    ListNode* ptr = a->next;
    a->next=NULL;
    a=ptr;
    while (a->next)
    a=a->next;
    a->next=head;
    head = ptr;
    return head;



}
