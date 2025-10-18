#include <stdio.h>

int main()
{
    int arraysize;

    printf("\nEnter the array's row&column size :");
    scanf("%d", &arraysize);

     int arr[arraysize][arraysize];

    

     printf("\nEnter Elements of array's : ");
    for (int i = 0; i < arraysize; i++)
    {
        for (int j = 0; j < arraysize; j++)
        {
            printf("\narr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The Tranfrom Matrix of array :\n");
    for (int i = 0; i < arraysize; i++)
    {
        for (int j = 0; j < arraysize; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}