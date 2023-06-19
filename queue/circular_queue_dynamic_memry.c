#include <stdio.h>
#include <stdlib.h>

struct cqueue
{
    int size, front, rear;
    int *arr;
};

int isfull(struct cqueue *cq)
{
    if ( cq->front == (cq->rear+1)%cq->size )
    {
        return 1;
    }
    return 0;
}

int isempty(struct cqueue *cq)
{
    if (cq->front == cq->rear )
    {
        return 1;
    }
    return 0;
}

void enqueue(struct cqueue *cq, int value)
{
    if (isfull(cq))
    {
        printf("\ncircular queue is full");
    }
    else
    {
        cq->rear=(cq->rear+1%cq->size);
    cq->arr[cq->rear] = value;  

    }   
}

int dequeue(struct cqueue *cq)
{int val;
    if (isempty(cq))
    {
        printf("\ncircular queue underflow");
    }
    else
    {
        cq->front=(cq->front+1)%cq->size;
         val=cq->arr[cq->front];
    }return val;
}

void display(struct cqueue *cq)
{
    int i;
    if (isempty(cq))
    {
        printf("\nqueue is empty");
        exit;
    }
    else
    {
        printf("\nqueue :");
        if (cq->front <= cq->rear)
        {
            for (i = cq->front+1; i <= cq->rear; i++)
            {
                printf("%d ", cq->arr[i]);
            }
        }
        else
        {
            for (i = cq->front+1; i < cq->size; i++)
            {
                printf("%d ", cq->arr[i]);
            }
            for (i = 0; i <= cq->rear; i++)
            {
                printf("%d ", cq->arr[i]);
            }
        }
        printf("\n");
    }
}

void peek(struct cqueue *cq)
{
    if (isempty(cq))
    {
        printf("\ncircular queue underflow");
    }
    else
    {
        printf("\nthe front element(peek) is %d", cq->front);
    }
}
int main()
{
    struct cqueue *cq;
    cq->size = 10;
    cq->front = cq->rear = 0;
    cq->arr = (int *)malloc(cq->size * (sizeof(int)));

    enqueue(cq,23);
    enqueue(cq,223);
    enqueue(cq,2333);
    enqueue(cq,243);
    enqueue(cq,253);
    enqueue(cq,238);
    enqueue(cq,236);
    enqueue(cq,239);
    enqueue(cq,1236);
    // enqueue(cq,2139);//this will cause overflow beacuse we have front at 0 index

    display(cq);

    int del=dequeue(cq);
    printf("%d is dequeued",del);
    // dequeue(cq);

    display(cq);
    enqueue(cq,6);
    // enqueue(cq,6);
    display(cq);
    // enqueue(cq,6);
return 0;
}