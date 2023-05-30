#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_view(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("elemnt:%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct node *insertatfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    third->next = head;

    printf("before insertion:\n");
    linkedlist_view(head);

    head = insertatfirst(head, 99);
    head = insertatfirst(head, 919);

    printf("after insertion:\n");
    linkedlist_view(head);
}
