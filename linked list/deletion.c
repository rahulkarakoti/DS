
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_view(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("elemnt:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

    // case 1: deletion from first
struct node *deletion_at_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

    // case 2: deletion at index
struct node *delete_at_index(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

    // case 2: deletion at end
struct node *delete_at_end(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

    // case 2: deletion at given value 
struct node *delete_at_value(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = first;

    first->data = 55;
    first->next = second;

    second->data = 65;
    second->next = third;

    third->data = 75;
    third->next = NULL;

// case 1: deletion from first
    // printf("before deletion:\n");
    // linkedlist_view(head);
    // head = deletion_at_first(head);

    // printf("\nafter deletion:\n");
    // linkedlist_view(head);

// case 2: deletion at index
    // printf("before deletion:\n");
    // linkedlist_view(head);
    // head = delete_at_index(head, 2);

    // printf("\nafter deletion:\n");
    // linkedlist_view(head);

// case 3: deletion at end
    // printf("before deletion:\n");
    // linkedlist_view(head);
    // head = delete_at_end(head);

    // printf("\nafter deletion:\n");
    // linkedlist_view(head);


//  case 4: deletion at end
    // printf("before deletion:\n");
    // linkedlist_view(head);
    // head = delete_at_value(head,55);

    // printf("\nafter deletion:\n");
    // linkedlist_view(head);
}
