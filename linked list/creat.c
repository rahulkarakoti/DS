#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedlist_view(struct node * ptr){

while( ptr!=NULL)
{printf("elemnt:%d\n",ptr->data);
ptr=ptr->next;}
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
}
