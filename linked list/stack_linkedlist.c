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

int isempty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int isfull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
        return 0;
}

struct node *push(struct node *top, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (isfull(top))
    {
        printf("stack overflow");
    }
    else
    {
        ptr->data = data;
        ptr->next = top;
        top = ptr;
        return top;
        // printf("pushed");
    }
}

int pop(struct node **top)
{
    if (isempty(*top))
    {
        printf("stack underflow");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    struct node *top = NULL;
    top = push(top, 77);
    top = push(top, 73);
    top = push(top, 7);
    top = push(top, 27);

    linkedlist_view(top);
    int element = pop(&top);
    printf("\nelemnt %d is poped\n", element);
    linkedlist_view(top);
     int element9 = pop(&top);
    printf("elemnt %d is poped", element9);
    linkedlist_view(top);
return 0;
}
