#include <stdio.h>

void display(int a[], int size)
{
    printf("\narray-->");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bublesort(int a[], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size - 1; j++)
        {
            if (a[i] < a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
}

void selection_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[min] > a[j])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
}

void insertionSort(int arr[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main()
{
    int a[] = {12, 3, 256, 33, 88, 11};
    int size = sizeof(a) / sizeof(int);
    display(a, size);
    printf("\nbubblesort");
    bublesort(a, size);
    display(a, size);
    printf("\nselecction sort");
    selection_sort(a, size);
    display(a, size);
    printf("\ninsertion sort");
    insertionSort(a, size);
    display(a, size);
    printf("\nmerg sort");
    mergeSort(a,0,5);
    display(a, size);

    return 0;
}