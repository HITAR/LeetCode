/**
*Merge two sorted linked lists and return it as a new list. 
*The new list should be made by splicing together the nodes of the first two lists.
*/

#include <cstdio>

typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

ListNode* mergeTwoLists1(struct ListNode* l1, struct ListNode* l2)
{
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    if(l1->val < l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l2->next, l1);
        return l2;
    }
}

ListNode* mergeTwoLists2(struct ListNode* l1, struct ListNode* l2)
{
    ListNode dummy;
    dummy.val = INT_MIN;
    ListNode *tail = &dummy;
    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if(l1)
        tail->next = l1;
    else
        tail->next = l2;
    return dummy.next;

}

