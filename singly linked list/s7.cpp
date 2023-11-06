#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int getcount(node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    else
    {
        return 1 + getcount(head->next);
    }
}

int main(int argc, char const *argv[])
{
    node *head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    cout << "count of nodes is " << getcount(head);

    return 0;
}
