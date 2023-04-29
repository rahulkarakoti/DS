#include <stdio.h>
#define max 10
int queue[max], front = -1, rear = -1; // global variable

void enqueue() // insert elment from rear
{
    int data;
    printf("enter elment:");
    scanf("%d", &data);
    if (front == max - 1)
    {
        printf("queue overflow");
    }
    else if (front == -1 && rear == -1)//it is a first elemnt
    {
        front = rear = 0;
        queue[front] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

void dequeue() // delete element from front
{
    if (front == -1 || front > rear)
    {
        printf("queue is empty");
    }
    else if (front == rear)//only one elemnt is left
    {
        front = rear = -1;
    }
    else
    {
        printf("dequeued %d", queue[front]);
        front++;
    }
}

void display() // display the queue
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

void peak(){
    if(front==-1){
        printf("queue is empty");
    }
    else{
        printf("the peak value of queue is %d \n",queue[front]);
    }
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
            peak();
        case 5:
            printf("thank you!!");
        default:
            printf("wrong choice!!");
            break;
        }
    }
}