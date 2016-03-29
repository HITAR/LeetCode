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
    ListNode *tail[2];
    ListNode dummyOdd,dummyEven;
    dummyOdd.val = INT_MIN;
    dummyEven.val = INT_MIN;
    int i;
    tail[0] = &dummyOdd;
    tail[1] = &dummyEven;
    for(i=0; head!=NULL; ++i)
    {
        //tail[i%2] = tail[i%2]->next = head; 
        tail[i%2]->next = head; // split into two half
        tail[i%2] = tail[i%2]->next;
        head = head->next;
    }
    tail[0]->next = dummyEven.next; // reconnect the link
    tail[1]->next = NULL;
    return dummyOdd.next;
}