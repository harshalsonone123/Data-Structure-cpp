#include <iostream>
using namespace std;

class Solution
{
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
        {
            return head;
            LisNode *prev, *curr;
            curr = head;
            prev = head;
            curr = curr->next;
            while (curr != NULL)
            {
                if (prev->val == curr->next)
                {
                    ListNode *temp = curr;
                    prev->next = curr->next;
                    curr = curr->next;
                    delete temp;
                }
                else
                {
                    prev = curr;
                    curr = curr->next;
                }
            }
        }
        return head;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
