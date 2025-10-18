#include <stdio.h>

int main()
{
    int row, col;

    printf("\nEnter the array's row size :");
    scanf("%d", &row);

    printf("Enter the array's Column size :");
    scanf("%d", &col);

    int arr[row][col];
    printf("\nEnter Value of array's : ");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\narr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int largestnumber = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > largestnumber)
            {
                largestnumber = arr[i][j];
            }

        }
       
    }

     
    printf("\n The largest Element : %d",largestnumber);
    return 0;
}