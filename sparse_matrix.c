#include <stdio.h>
// void display(int a[][] ,int row,int col){
//      for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%d",a[i][j]);
//         }
//         printf("\n");
//     }
// }

int main()
{
    int row, col, i, j;
    int a[100][100];
    printf("enter the no. of rows:");
    scanf("%d", &row);
    printf("enter the no. of columns:");
    scanf("%d", &col);
    printf("enter the sparse matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("enter elemnt[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // display(a,row,col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("non-zero value are at:");
    printf("\nrow\tcol\tvalue ");
     for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if(a[i][j]!=0){
                printf("\n%d\t%d\t%d",i+1,j+1,a[i][j]);
            }
        }
        // printf("\n");
    }
}
