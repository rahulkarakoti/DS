#include <stdio.h>
#define N 5
int stack[N];
int top=-1;

void push(){
    int x;
    if(top==N-1){
        printf("stack overflow");
    }
    else
    {
        printf("enter elment:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("%d pushed succesfully\n",x);
    }
}

void pop(){
    int x;
    if(top==-1){
        printf("stack is empty");
    }
    else
    {
        // x=stack[top];
        top--;
        // printf("the poped elemnt is %d",x);
    }
}

void peak(){
    printf("the peak  elemnt of stack is %d \n",stack[top]);
}

void display(){
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    int ch;
    do{printf("==>enter operation on stack:\n1.push\n2.pop\n3.peak\n4.display\n5.exit\n");
    scanf("%d", &ch);
    switch(ch)
        {
        case 1:
            push(stack, &top);
            display();
            break;
        case 2:
            pop();
            display();
            break;
        case 3:
            peak();
            break;
        case 4:
            display();
            break;
        
        }}while(ch!=5);
}