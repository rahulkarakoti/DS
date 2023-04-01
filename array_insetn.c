//ARRAY OPRATIONS
#include <stdio.h>
// display
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
// insertion
int insertion(int a[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = element;
}

// deletion
int deletion(int a[], int size, int index,int capacity)
{
    if (index >= capacity)
    {
        return -1;
    }
    for (int i = index-1; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
//linear search
void linear_search(int a[],int srch,int size)
{
    int flag=0,i;
    for(i=0;i<size;i++)
    {
        if(a[i]==srch){
            printf("elemnt found at %d index",i+1);
            break;
        }
    }
if(i==size) 
{
    printf("elemnt not found");
}
}

int main()
{
    int a[100];
    int size, elemnt, index, ch,srch;
    printf("\nenter the size of array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("\nenter a[%d] elemnt:", i+1);
        scanf("%d", &a[i]);
    }
    // size=sizeof(a)/sizeof(int);
    display(a, size);
    printf("\n1: for insertion\n2: for deletion:\n3: for search\nenter opertion->");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("\nenter element ot insert:");
        scanf("%d", &elemnt);
        printf("\nenter index of element to insert:");
        scanf("%d", &index);
        index -= 1;
        insertion(a, size, elemnt, index, 100);
        size += 1;
        printf("\ninsertion complete:\n");
        display(a, size);
    }
    if(ch==2)
    {
        printf("enter index of elemnt\n:");
        scanf("%d",&index);
        deletion(a,size,index,100);
        size-=1;
        display(a,size);
    }
    if(ch==3){
        printf("enter elemnt to search in array:");
        scanf("%d",&srch);
        linear_search(a,srch,size);
    }
}