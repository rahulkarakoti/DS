#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
};

int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

void push(int data, struct stack *s)
{
    if (isfull(s))
    {
        printf("Stack is full\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = data;
        printf("pushed succesfull");
    }
}

int pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("Stack is empty\n");
    }
    else
    {
        int x;
        x = s->arr[s->top];
        s->top--;
        return x;
    }
}

int peek(struct stack *s, int i)
{
    int arrayind = s->top - i + 1;
    if (arrayind < 0)
    {
        printf("invalid index.");
        return -1;
    }
    else
    {
        return s->arr[arrayind];
    }
}

void display(struct stack *s)
{
    for (int j = 1; j <= s->top + 1; j++)
    {
        printf("\nthe value at index %d is %d", j, peek(s, j));
    }
}

void stacktop(struct stack *s)
{
    int top = s->arr[s->top];
    printf("the top element of stack is %d", top);
}

void stackbottom(struct stack *s)
{
    int bottom = s->arr[0];
    printf("the bottom element of stack is %d", bottom);
}

int main()
{
    struct stack *s;
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int ch, x;
    do
    {
        printf("\n1.push\n2.pop\n3.display\n4.stacktop\n5.stackbottom\n6.exit\nenter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter number:");
            scanf("%d", &x);
            push(x, s);
            break;
        case 2:
            x = pop(s);
            printf("%d is poped", x);
            break;
        case 3:
            display(s);
            break;
        case 4:
            stacktop(s);
            break;
        case 5:
            stackbottom(s);
            break;
        default:
            break;
        }
    } while (ch != 6);

    return 0;
}
