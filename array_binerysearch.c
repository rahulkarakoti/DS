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

// binery search
void binery_search(int a[], int srch, int size)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high) // keep searching until high and low converge
    {
        mid = (low + high) / 2;
        if (a[mid] == srch)
        {
            printf("\nelemnt is prsent at %d", mid);
        }
        if (a[mid] < srch)
        {
            low = mid + 1;
        }    
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int a[] = {1, 22, 333, 444, 5556, 7655, 8897, 9999};
    int size, srch;
    size = sizeof(a) / sizeof(int);
    display(a, size);
    printf("\nenter elemt to search:");
    scanf("%d", &srch);
    binery_search(a, srch, size);
}