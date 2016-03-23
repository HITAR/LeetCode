/**
* Given a sorted linked list,
* delete all duplicates such that each element appear only once.
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


//Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode *p = head;
    struct ListNode *q = p->next;
    while(p!=NULL)
    {
        while(q->val==p->val&&q!=NULL)
        {
            p->next = q->next;
            delete(q);
            q = p->next;
        }
        p=q;
        q=q->next;
    }
    return head;
}


int main()
{
    struct ListNode *head;
    head = (struct ListNode*)malloc(sizeof(ListNode));
    head->val =1;
     struct ListNode *p1 = head->next;
     p1 = (struct ListNode*)malloc(sizeof(ListNode));
     p1->val =1;
     p1->next = NULL;
     struct ListNode* ans = deleteDuplicates(head);
     for(struct ListNode *q = ans;q!=NULL;q = q->next)
        cout<<q->val;
    return 0;
}
