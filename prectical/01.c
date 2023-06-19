#include <stdio.h>

void treversal(int array[], int size)
{
    printf("\narray-> ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int insertion(int array[], int size, int value, int position, int capacity)
{
    if (position >= capacity)
    {
        return -1;
    }
    int i;

    for (i = size; i >= position; i--)
    {
        array[i] = array[i - 1];
    }
    array[i] = value;
    return 0;
}

int deletion(int array[], int size, int capacity, int index)
{
    if (index > capacity)
    {
        return -1;
    }
    for (int i = index - 1; i < size; i++)
    {
        array[i] = array[i + 1];
    }
}

int *reverse(int array[], int size)
{

    for (int i = 0; i < size / 2; i++)
    {
        int temp;
        temp = array[i];
        array[i] = array[size - i - 1];
        array[size - 1 - i] = temp;
    }
    return array;
}

int *merge(int array1[], int size1, int array2[], int size2)
{
    int i, j;
    int mergesize = size1 + size2;
    for (i = size1, j = 0; i < mergesize && j < size2; i++, j++)
    {
        array1[i] = array2[j];
    }
    return array1;
}

void search(int a[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == value)
        {
            printf("\n%d is at %d index\n", value, i + 1);
        }
    }
}

int main()
{
    int array1[10] = {1, 2, 3, 4, 5};
    int size1 = 5;
    int array2[10] = {6, 7, 8, 9, 10};
    int size2 = 5;
    printf("\nbefore isertion");
    treversal(array1, size1);
    insertion(array1, size1, 222, 3, 10);
    printf("\nafter insertion");
    size1++;
    treversal(array1, size1);

    printf("\nafter deletion");
    deletion(array1, size1, 10, 1);
    size1--;
    treversal(array1, size1);

    printf("\nafter reversal");
    array1[10] = *reverse(array1, size1);
    treversal(array1, size1);

    printf("\nafter merge");
    array1[10] = *merge(array1, size1, array2, size2);
    treversal(array1, 10);

    search(array1, size1, 4);
    return 0;
}
