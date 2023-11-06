class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *a, *b;
        a = head;
        b = head->next;
        while (b != NULL)
        {
            if (b->val == 0)
            {
                if (b->next == NULL)
                {
                    a->next = NULL;
                }
                else
                {
                    a->next = b;
                    a = b;
                }
            }
            else
            {
                a->val += b->val;
            }
            b = b->next;
        }
        return head;
    }
};