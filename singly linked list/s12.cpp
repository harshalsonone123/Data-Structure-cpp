#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int freq = 0;

void push(struct node **head_ref, int new_data)
{
    /* allocate node */
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

int count(struct node *head, int key)
{
    if (head = NULL)
        return freq;
    if (head->data == key)
        freq++;
    return count(head->next, key);
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);

    cout << "count of 1 is " << count(head, 1);

    return 0;
}
