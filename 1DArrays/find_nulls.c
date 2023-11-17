/* Program to find if an array cointans zeros */

#include <stdio.h>

void search_zeros(int *arr, int size)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d\t", arr[i]);
            count++;
        }
    }

    printf("\nNumber of zeros in the given array: %d\n", count);
}


int main()
{
    int size;

    printf("Enter size for the array:\n");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements for the array:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Zeros in the array:\n");
    search_zeros(array, size);
}