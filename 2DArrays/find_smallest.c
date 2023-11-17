/* Program to find the smallest element for each row of a 2D array */

#include <stdio.h>

int smallest(int *arr, int size)
{
    int help=*arr;
    for(int i=0; i<size; i++)
    {
        if(arr[i]<help)
        {
            help=arr[i];
        }
    }
    return help;
}

int main()
{
    int cols, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("\nEnter number of cols: ");
    scanf("%d", &cols);
    printf("\n");
    
    int array[rows][cols];

    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            printf("Enter number for row %d col %d\n",r+1, c+1);
            scanf("%d", &array[r][c]);
        }
    }

    //printing the array
    printf("The array you just entered:\n");
    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            printf("%d\t", array[r][c]);
        }
        printf("\n");
    }

    int res=0;
    for(int r=0; r<rows; r++){
        printf("The smallest element for row %d is: %d\n", r+1, smallest(array[r], cols));
    }

    
}