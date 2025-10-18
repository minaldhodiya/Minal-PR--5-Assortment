#include <stdio.h>

int main()
{
    int num;

    printf("Enter the array's  size :");
    scanf("%d", &num);  

    int arr[num];   

    printf("\nEnter array's Elements : ");
    for (int i = 0; i < num; i++)
    {       
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr[i]);   
    }

    printf("Negative Elements from a array :-");
    for (int i = 0; i < num; i++)
    {
        if (arr[i]<0)
        {
            printf(" %d ", arr[i]); /* code */
        }       
    }
    return 0;
}