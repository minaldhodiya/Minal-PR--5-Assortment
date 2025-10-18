#include <stdio.h>

int main()
{
    int row, col,sum=0,langth;

    printf("Enter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's Column size :");
    scanf("%d", &col);

    int arr[row][col];

    langth = sizeof arr/ sizeof arr[0][0];

     printf("\nEnter Value of array's : ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\narr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

      for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum +=arr[i][j];
        }
        
    }
    printf("\n Sum of Array :%d",sum);
    printf("\n Averege of an Array : %d",sum/langth);
    return 0;
}