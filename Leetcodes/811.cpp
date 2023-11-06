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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *low = list1;
        for (int i = 1; i < a; i++)
        {
            /* code */
            low = low->next;
        }
        ListNode *high = low;
        for (int i = a; i <= b + 1; i++)
        {
            /* code */
            high = high->next;
        }
        ListNode *temp = list2;
        while (temp->next != NULL)
        {
            /* code */
            temp = temp->next;
        }
        low->next = list2;
        temp->next = high;
        return list1;
    }
};