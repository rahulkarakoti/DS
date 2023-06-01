#include <stdio.h>
#include <stdlib.h>

struct cqueue
{
    int size, front, rear;
    int *arr;
};

int isfull(struct cqueue *cq)
{
    if (cq->front == 0 && cq->rear == cq->size - 1 || cq->rear == cq->front - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(struct cqueue *cq)
{
    if (cq->front == -1 && cq->rear == -1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct cqueue *cq, int value)
{
    if (isfull(cq))
    {
        printf("\ncircular queue overflow");
    }
    else if (cq->rear == cq->size - 1)
    {
        cq->rear = 0;
    }
    else if (cq->front == -1 && cq->rear == -1)
    {
        cq->front = cq->rear = 0;
    }
    else
    {
        cq->rear++;
    }
    cq->arr[cq->rear] = value;
}

void dequeue(struct cqueue *cq)
{
    if (isempty(cq))
    {
        printf("\ncircular queue underflow");
    }
    else if (cq->front == cq->rear)
    {
        cq->front = cq->rear = -1;
    }
    else if (cq->front == cq->size - 1)
    {
        cq->front = 0;
    }
    else
    {
        cq->front++;
    }
}

void display(struct cqueue *cq)
{
    int i;
    if (cq->front == -1 && cq->rear == -1)
    {
        printf("\nqueue is empty");
        exit;
    }
    else
    {
        printf("\nqueue :");
        if (cq->front <= cq->rear)
        {
            for (i = cq->front; i <= cq->rear; i++)
            {
                printf("%d ", cq->arr[i]);
            }
        }
        else
        {
            for (i = cq->front; i < cq->size; i++)
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
    cq->front = cq->rear = -1;
    cq->arr = (int *)malloc(cq->size * (sizeof(int)));

    // enqueue(cq,23);
    // enqueue(cq,223);
    // enqueue(cq,2333);
    // enqueue(cq,243);
    // enqueue(cq,253);
    // enqueue(cq,238);
    // enqueue(cq,236);
    // enqueue(cq,239);
    // enqueue(cq,1236);
    // enqueue(cq,2139);

    display(cq);

    // dequeue(cq);
    // dequeue(cq);

    // display(cq);
    // enqueue(cq,6);
    // enqueue(cq,6);

    // display(cq);
}