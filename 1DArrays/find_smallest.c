/* Program to find the smallest element of an array */

#include <stdio.h>

int smallest(int *arr, int size)
{
    int temp=0, help_var=0;
    int el_val=0;

    help_var=*arr; // it means that help_var = arr[0]

    for(int i=0; i<size; i++)
    {
        if(help_var>arr[i])
        {
            help_var=arr[i];
        }
    }

    return help_var;
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

    int res= smallest(array, size);
    printf("The smallest element in the array is: %d\n", res);

}