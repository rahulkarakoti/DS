// ARRAY OPRATIONS
#include <stdio.h>
// display
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

// linear search
void linear_search(int a[], int srch, int size)
{
    int flag = 0, i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == srch)
        {
            printf("elemnt found at %d index", i + 1);
            break;
        }
    }
    if (i == size)
    {
        printf("elemnt not found");
    }
}

int main()
{
    int a[100];
    int size, elemnt, index, ch, srch;
    printf("\nenter the size of array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\nenter a[%d] elemnt:", i + 1);
        scanf("%d", &a[i]);
    }
    display(a, size);

    printf("\nenter elemnt to linear search in array:");
    scanf("%d", &srch);
    linear_search(a, srch, size);
}