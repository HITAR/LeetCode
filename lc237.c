typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

void deleteNode(ListNode* node)
{
    ListNode* p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);
}
