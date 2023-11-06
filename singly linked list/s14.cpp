#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int countnodes(struct node *n)
{
    int res = 1;
    struct node *temp = n;
    while (temp->next != n)
    {
        res++;
        temp = temp->next;
    }
    return res;
}

int countnodeinloop(struct node *list)
{
    struct node *slow_p = list, *fast_p = list;

    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;

        if (slow_p == fast_p)
            return countnodes(slow_p);
    }
    return 0;
}

struct node *newnode(int key)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    return temp;
};

int main(int argc, char const *argv[])
{
    struct node *head = newnode(1);
    head->next = newnode(2);
    head->next->next = newnode(3);
    head->next->next->next = newnode(4);
    head->next->next->next = newnode(5);

    head->next->next->next->next = head->next;

    cout << countnodeinloop(head) << endl;
    return 0;
}
