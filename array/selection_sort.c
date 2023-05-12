#include <stdio.h>
void display(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}
void selection_sort(int a[], int n)
{
    int temp, min;
    printf("\nsorted array:\n");
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main()
{
    int a[] = {192, 304, 2, 121, 112, 22, 44};
    int size = 7;
    display(a, size);
    selection_sort(a, size);
    display(a, size);
}