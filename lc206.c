/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *p,*q;
    p = head->next;
    q = p->next;
    head->next = NULL;
    while(q!=NULL)
    {
    	q->next = p;
    	p = q;
    	q = q->next;
    }
    head->next = p;
    return head;
}
