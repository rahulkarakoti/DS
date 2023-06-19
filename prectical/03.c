#include <stdio.h>

void display(int a[2][2])
{
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
void addition(int a[2][2], int b[2][2])
{
    printf("\nthe sum of array is \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[2][2])
{
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

void product(int a[2][2], int b[2][2])
{
    int rslt[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            rslt[i][j] = 0;

            for (int k = 0; k < 2; k++)
            {
                rslt[i][j] += a[i][k] * b[k][j];
            }

            printf("%d\t", rslt[i][j]);
        }

        printf("\n");
    }
}

void sum_of_row(int a[2][2])
{
    int x = 0;
    printf("\n\nsum of rows->\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
            x += a[i][j];
        }
        printf("\t\t%d\n ", x);
        x = 0;
    }
}

void sum_of_col(int a[2][2])
{
    int x = 0;
    printf("\n\nsum of column->\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
            x += a[j][i];
        }
        printf("\t\t%d\n ", x);
        x = 0;
    }
}

int main()
{
    int a[2][2] = {{12, 34}, {98, 11}};
    int b[2][2] = {{42, 84}, {90, 81}};
    
    printf("matrix a->");
    display(a);
    printf("matrix b->");
    display(b);
    printf("addition of matrix a & b->");
    addition(a,b);
    printf("transpose of matrix a->\n");
    transpose(a);
    printf("product of matrix a&b->\n");
    product(a, b);
    sum_of_row(a);
    sum_of_col(a);
}