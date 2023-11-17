/* Program to find the number of even elements for each row in a 2D array */

#include <stdio.h>

int even(int *arr, int size)
{
    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            count ++;
        }
   }

   return count;
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
    printf("The array you just entered:\n");
    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<cols; c++)
        {
            printf("%d\t", array[r][c]);
        }
        printf("\n");
    }


    for(int r=0; r<rows; r++)
    {
        printf("The even numbers in row %d are: %d\n", r+1, even(array[r], cols));
    } 

}