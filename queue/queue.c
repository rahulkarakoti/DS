#include <stdio.h>
#define max 10
int queue[max], front = -1, rear = -1;//global variable


void enqueue()//insert elment from rear
{
    int data;
    if (front == max - 1)
    {
        printf("queue overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("enter elment:");
        scanf("%d", &data);
        rear++;
        queue[rear] = data;
    }
}

void dequeue()//delete element from front
{
    if (front == -1 || front > rear)
    {
        printf("stack is empty");
    }
    else
    {
        printf("dequeued %d", queue[front]);
        front++;
    }
}

void display()//display the queue
{
    int i;
    if (front == -1)
    {
        printf("queue empty ");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

int main()
{
    int ch;
    while (ch!= 4)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\nenter your choice->");
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
            printf("thank you!!");
        default:
            printf("wrong choice!!");
            break;
        }
    }
}