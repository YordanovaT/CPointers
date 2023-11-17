/* Program to find the smallest element of an array and return its index*/

#include <stdio.h>

int biggest(int *arr, int size)
{
    int el_val=0;
    int index=0;
    int max=*arr; // it means that help_var = arr[0]

    for(int i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            index=i;
        }

    }

    return index+1;
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

    int res= biggest(array, size);
    printf("The index of the biggest element in the array is: %d.\n", res);

}