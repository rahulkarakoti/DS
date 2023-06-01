#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size,front,rear;
    int *arr;
};

int isfull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
        return 0;
}

int isempty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }
        return 0;
}

void enqueue(struct queue *q,int value){
    if(isfull(q)){
        printf("queue overflow");
    }
    else{
        if(q->front==-1 && q->rear==-1){
            q->front=0;
        }
        q->rear++;
        q->arr[q->rear]=value;
    }
}

int dequeue(struct queue *q){
    if(isempty(q)){
        printf("queue underflow");
    }
    else{
       int x;
       x=q->arr[q->front];
       q->front++;
       return x;
    }
}

void displayqueue(struct queue *q){
    for(int i=q->front;i<=q->rear;i++){
        printf("\nelement:%d",q->arr[i]);
    }
}

int main(){
    struct queue *q;
    q->size=10;
    q->front=-1;
    q->rear=-1;
    q->arr=(int*)malloc(sizeof(int)*q->size);

    enqueue(q,12);
    enqueue(q,13);
    enqueue(q,132);
    enqueue(q,153);
    enqueue(q,142);
    enqueue(q,133);
    displayqueue(q);

printf("\n\n%d dequed \n",dequeue(q));
// printf("\n\n%d front ",q.front);
// printf("\n\n%d rear ",q.rear);


    displayqueue(q);

}
