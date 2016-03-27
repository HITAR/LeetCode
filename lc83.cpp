/**
* Given a sorted linked list,
* delete all duplicates such that each element appear only once.
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


//Definition for singly-linked list.
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

ListNode * deleteDuplicates_myversion(ListNode *head)
{
    if(!head || !head->next) //make sure the list is not empty so that q is legal.
        return head;
    ListNode *p = head;
    ListNode *q = head->next;
    while(p)
    {
        while(q && p->val == q->val)
        {
            p->next = q->next;
            q = p->next;
        }
        if(q == NULL)
            p = q;
        else
        {
            p = q;
            q = q->next;
        }
    }
    return head;
}



ListNode* deleteDuplicates(ListNode* head)
{
    ListNode* cur = head;
    while(cur)
    {
        while(cur->next && cur->val == cur->next->val)
        {
            cur->next = cur->next->next;
        }
        cur = cur->next;
    }
    return head;
}

// A very talent solution,, cannot understand yet.
ListNode* deleteDuplicates2(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        head->next = deleteDuplicates(head->next);
        return head->val == head->next->val ? head->next : head;
}


int main()
{
    struct ListNode *head;
    head = (struct ListNode*)malloc(sizeof(ListNode));
    head->val =1;
    head->next = NULL;
    struct ListNode *p1 = (struct ListNode*)malloc(sizeof(ListNode));
    head->next = p1;
    p1->val =2;
    p1->next = NULL;
    struct ListNode* ans = deleteDuplicates2(head);
    for(struct ListNode *q = ans; q!=NULL; q = q->next)
        cout<<q->val;
    return 0;
