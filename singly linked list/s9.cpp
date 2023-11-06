#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void printnthfromlast(struct node *head, int n)
{
    int len = 0, i;
    struct node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    if (len < n)
        return;

    temp = head;

    for (i = 1; i < len - n + 1; i++)
        temp = temp->next;
    cout << temp->data;
    return;
}

void push(struct node **head_ref, int new_data)
{
    struct node *new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 35);

    printnthfromlast(head, 4);

    return 0;
}
