/* Program to show the row where all elements of a 2D array are positive*/

#include <stdio.h>

int find_pos(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]<0)
        {
            return 1; //not positive
        }
    }
    return 0;
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
            printf("Enter number for row %d col %d\n",r, c);
            scanf("%d", &array[r][c]);
        }
    }

    //printing the array
    printf("\nThe array you just entered:\n");
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
        if(find_pos(array[r], cols) == 0)
        {        
            printf("All elements in row %d are positive\n", r+1);
        }
    }

    //printf("The sum of all positive elements int the array is: %d\n", res);
}