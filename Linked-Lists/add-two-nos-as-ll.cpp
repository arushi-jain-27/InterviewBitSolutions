/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* newnode (int val)
{
    ListNode* t;
    t=(ListNode*) malloc (sizeof(ListNode));
    t->val=val;
    t->next=NULL;
    return t;
}
ListNode* Solution::addTwoNumbers(ListNode* head1, ListNode* head2) {
 ListNode* head=NULL;
 ListNode* ptr=NULL;
 int carry=0, sum;
 while (head1 && head2)
 {
     sum=head1->val+head2->val+carry;
     if (sum>=10)
     {

         carry=sum/10;
         sum=sum%10;
     }
     else
     carry=0;
     ListNode* t=newnode (sum);
     if (!head)
     {
         head=t;
         ptr=t;
     }
     else
     {
         ptr->next=t;
         ptr=ptr->next;
     }
     head1=head1->next;
     head2=head2->next;

 }
 while (head1)
 {
     sum=head1->val+carry;
     if (sum>=10)
     {
         carry=sum/10;
         sum=sum%10;

     }
     else
     carry=0;
     ListNode* t=newnode (sum);
     if (!head)
     {
         head=t;
         ptr=t;
     }
     else
     {
         ptr->next=t;
         ptr=ptr->next;
     }
     head1=head1->next;
 }
  while (head2)
 {
     sum=head2->val+carry;
     if (sum>=10)
     {

         carry=sum/10;
         sum=sum%10;
     }
     else
     carry=0;
     ListNode* t=newnode (sum);
     if (!head)
     {
         head=t;
         ptr=t;
     }
     else
     {
         ptr->next=t;
         ptr=ptr->next;
     }
     head2=head2->next;
 }
 if (carry)
 {
    ListNode* t=newnode (carry);
     if (!head)
     {
         head=t;
         ptr=t;
     }
     else
     {
         ptr->next=t;
         ptr=ptr->next;
     }
 }
 return head;




}
