#include <stdio.h>
/* Write a function for finding the largest number in a one dimensional array, having N
elements. Using this function display the largest element in each row of a mxn matrix. */

int large_elem(int len, int *arr);

int main()
{
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    printf("Enter %d elements: ", row*col);
    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            scanf("%d", &arr[i][j]);

    for (int i=0; i<row; i++)
        printf("Largest element of row %d = %d\n", i,
            large_elem(col, arr[i]));

    return 0;
}

int large_elem(int len, int *arr)
{
    int large = arr[0];
    for (int i=0; i<len; i++)
        if (arr[i] > large) large = arr[i];
    return large;
}