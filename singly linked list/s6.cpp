#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void deletelist(node **head_ref)
{

    node *current = *head_ref;
    node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}

void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main(int argc, char const *argv[])
{
    node *head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout << "deleting linked list ";
    deletelist(&head);

    cout << "\n linked list deleted ";
    return 0;
}
