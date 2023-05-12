// linked list insertion program
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_view(struct node *ptr) // dispaly the linked list
{

    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertionatfirst(struct node *head, int data) // case 1: insert element at first index
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
}

struct node *insertionatindex(struct node *head, int index, int data) // case 2: insert element at any index
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    int i = 0;
    struct node *p = head;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
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

    linkedlist_view(head);

    int ch, x, index;
    do
    {
        printf("\nenter elemnt:");
        scanf("%d", &x);

        printf("1.insert at first\n2.insert at index\nenter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            head = insertionatfirst(head, x); // 999 is inserted at 1st index
            printf("\n");
            linkedlist_view(head); // display the list
            break;
        case 2:
            printf("enter index:");
            scanf("%d", &index);
            head = insertionatindex(head, index, x); // 921 is inserted at 3rd index
            linkedlist_view(head);
            break;
    
        }
    } while (ch<3);
    return 0;
}
