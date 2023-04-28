#include <stdio.h>
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void buble_sort(int a[],int size){
    int i,j;
    for ( i = 0; i < size; i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(a[i]<a[j])
            swap(&a[i],&a[j]);
            
        }
    }
    
}

int main()
{
    int a[] = {192, 304, 2, 121, 112, 22, 44};
    int size = 7;
    display(a, size);
    buble_sort(a, size);
    printf("\n");
    display(a, size);
}