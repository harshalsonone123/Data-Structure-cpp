#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void printmiddle(struct node *head)
{
    int count = 0;
    struct node *mid = head;

    while (head != NULL)
    {
        if (count = 1)
            mid = head->next;
    }

    if (mid != NULL)
        printf("the middle element is [%d]\n\n", mid->data);
}

void push(struct node **head_ref, int new_data)
{
    struct node *new_node = (struct node *)malloc(
        sizeof(struct node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    int i;

    for (i = 5; i > 0; i--)
    {
        push(&head, i);
        printlist(head);
        printmiddle(head);
    }

    return 0;
}
