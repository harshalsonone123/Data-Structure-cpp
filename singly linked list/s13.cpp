#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data)
{
    /* allocate node */
    struct Node *new_node = new Node;

    /* put in the data  */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

bool detectloop(struct node *h)
{
    unordered_set<Node *> s;
    while (h != NULL)
    {
        if (s.find(h) != s.end())
        {
            return true;
        }
        s.insert(h);
        h = h->next;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;

    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);

    /* Create a loop for testing */
    head->next->next->next->next = head;

    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    return 0;

    return 0;
}
