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
    ListNode* curr=head;
    ListNode* prev;
    ListNode* trail;
    while (curr)
    {
        trail=curr->next;
        curr->next=prev;
        prev=curr;
        curr=trail;
    }
    return prev;
}
ListNode* Solution::reverseList(ListNode* head, int k) {
  if (k==1)
    return head;
  ListNode* ptr=head;
  ListNode* prev=NULL;
  int c;
  while (ptr)
  {
      c=1;
      ListNode* start=ptr;

      while (c<k)
      {
          c++;
          ptr=ptr->next;
      }
      ListNode* t=ptr->next;
      ptr->next=NULL;
      ptr=reverse (start);
      if (prev)
        prev->next=ptr;
      else
        head=ptr;
      start->next=t;
      prev=start;
      ptr=t;
  }

  return head;
}
