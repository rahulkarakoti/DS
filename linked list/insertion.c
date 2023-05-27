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

struct node *insertion_atfirst(struct node *head, int data) // case 1: insert element at first index
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
}

struct node *insertion_atindex(struct node *head, int index, int data) // case 2: insert element at any index
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

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

struct node *insertion_atend(struct node *head,int data){  //case:3 insert at end
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p = head;

    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct node *insertion_afternode(struct node *head,struct node *prevnode,int data){//case 4: insert after the node 
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    
    ptr->next=prevnode->next;
    prevnode->next=ptr;

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

        printf("1.insert at first\n2.insert at index\n3.insert at end\n4.insert at second index\n5.exit\nenter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            head = insertion_atfirst(head, x); // x is inserted at 1st index
            printf("\n");
            linkedlist_view(head); // display the list
            break;
        case 2:
            printf("enter index:");
            scanf("%d", &index);
            head = insertion_atindex(head, index, x); // x is inserted at  index
            linkedlist_view(head);
            break;
        case 3:
            head = insertion_atend(head,x); // x is inserted at end 
            printf("\n");
            linkedlist_view(head);
            break;
    case 4:
            head = insertion_afternode(head,second,x); // x is inserted at 2nd index
            printf("\n");
            linkedlist_view(head);
            break;
        }
    } while (ch<5);
    return 0;
}
