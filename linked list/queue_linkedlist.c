#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;

void linkedlist_view(struct node *front)
{
    printf("\nprinting elements of queue\n");
    while (front != NULL)
    {
        printf("elemnt:%d\n", front->data);
        front = front->next;
    }
}

int isfull()
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int val)
{
    if (isfull())
    {
        printf("queueu is full\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = NULL;
        if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}

int dequeue()
{
    int x = -1;
    struct node *ptr = front;
    if (front == NULL)
    {
        printf("queue is empty");
    }
    else
    {
        front = front->next;
        x = ptr->data;
        free(ptr);
    }
    return x;
}

int main()
{
    enqueue(2);
    enqueue(21);
    enqueue(211);
    enqueue(121);
    linkedlist_view(front);
    printf("\ndequed %d", dequeue());
    printf("\ndequed %d", dequeue());
    printf("\ndequed %d", dequeue());
    linkedlist_view(front);
}