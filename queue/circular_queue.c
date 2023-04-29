#include <stdio.h>
#define max 5
int cqueue[max], front = -1, rear = -1;

void enqueue()
{
    int data;
    printf("enter elmnt:");
    scanf("%d", &data);
    if ((front == 0 && rear == max - 1) || rear == front - 1)
    {
        printf("queue is full\n");
    }
    else if (rear == max - 1)
    {
        rear = 0;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    cqueue[rear] = data;
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == max - 1)
    {
        front = 0;
    }
    else
    {
        front++;
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty\n");
    }

    printf("%d", cqueue[front]);
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
printf("queue :");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", cqueue[i]);
        }
    }
    else
    {
        for (i = front; i < max; i++)
        {
            printf("%d ", cqueue[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d ", cqueue[i]);
        }
    }
    printf("\n");
}

int main()
{
    int ch;
    while (ch != 5)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.peak\n5.exit\nenter your choice->");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            display();
            break;
        case 2:
            dequeue();
            printf("\n");
            display();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            printf("thank you!!");
        default:
            printf("wrong choice!!");
            break;
        }
    }
}