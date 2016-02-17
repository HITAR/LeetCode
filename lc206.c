/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };  //no head node.
 */



 //solution:iteration. 
struct ListNode* reverseList1(struct ListNode* head) {
    if(head==NULL) return head;

    struct ListNode *p = head->next;
    head->next = NULL;
    while(p!=NULL)
    {
    	struct ListNode *tmp = p->next;
    	p->next = head;
    	head = p;
    	p = tmp;
    }
    return head;
}

 //solution:recursive

struct ListNode* reverseList2(struct ListNode* head)
{
	if(head==NULL || head->next ==NULL)
		return head;
	struct ListNode *p = head->next;
	head->next = NULL;
	struct ListNode *newhead = reverseList2(p);
	p->next = head;

	return newhead;
}











