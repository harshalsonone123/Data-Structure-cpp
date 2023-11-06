#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    int totalNodes(ListNode *head)
    {
        int temp = 0;
        ListNode *tempNode = head;
        while (tempNode)
        {
            /* code */
            temp++;
            tempNode = tempNode->next;
        }
        return temp;
    }

    int pairSum(ListNode *head)
    {
        int sum = INT_MIN;
        ListNode *middleNode = head;
        int N = totalNodes(head);
        int i = 0;
        while (i != N / 2)
        {
            /* code */
            i++;
            middleNode = middleNode->next;
        }

        ListNode *middleCopy = middleNode;
        stack<Listnode> st;
        while (middleCopy)
        {
            /* code */
            st.push(middleCopy);
            middleCopy = middleCopy->next;
        }
        int j = 0;
        ListNode *finalNodePtr = head;
        while (j != N / 2)
        {
            /* code */
            sum = max(st.top()->val + finalNodePtr->val, sum);
            st.pop();
            finalNodePtr = finalNodePtr->next;
            j++;
        }
        return sum;
    }
};
