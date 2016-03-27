/**
*Given a singly linked list, group all odd nodes together followed by the even nodes.
* Please note here we are talking about the node number and not the value in the nodes.

*You should try to do it in place. The program should run in O(1) space complexity and O(nodes) time complexity.

*Example:
*Given 1->2->3->4->5->NULL,
*return 1->3->5->2->4->NULL.

*Note:
*The relative order inside both the even and odd groups should remain as it was in the input. 
*The first node is considered odd, the second node even and so on ...
*/


typedef struct ListNode
{
	int val;
             struct ListNode *next;
}ListNode;


ListNode* oddEvenList(ListNode* head)
{
	ListNode dummyOdd,dummyEven;
	dummyOdd.val = INT_MIN;
	dummyEven.val = INT_MIN;
	ListNode* tail_o = &dummyOdd;
	ListNode* tail_e = &dummyEven;

	ListNode *hn = head->next;
	while(head)
	{
		tail_o->next = head;
		tail_e->next = hn;

		head = head->next->next;
		hn = hn->next->next;

		tail_o = tail_o->next;
		tail_e = tail_e->next;
	}
	tail_o->next = dummyEven.next;
	tail_e->next = NULL;
	return dummyOdd.next;
}