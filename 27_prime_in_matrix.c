#include <stdio.h>
/* Write a function for checking whether a positive integer number is prime or not. Using
this function display the prime numbers in a mxn matrix. */

void find_prime(int row, int column, int matrix[row][column])
{
    printf("Prime numbers are: \n");
    for (int i=0; i<row; i++)
        for (int j=0; j<column; j++)
        {
            if (matrix[i][j] < 2)
                continue;
            int prime = 1;
            for (int k=2; k<matrix[i][j]; k++)
                if (matrix[i][j]%k==0)
                {
                    prime = 0;
                    break;
                }
            if (prime==1) printf("%d\t", matrix[i][j]);
        }
}

int main()
{
    int row, column;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &row, &column);

    int matrix[row][column];
    printf("Enter %d elements: ", row*column);
    for (int i=0; i<row; i++)
        for (int j=0; j<column; j++)
            scanf("%d", &matrix[i][j]);

    find_prime(row, column, matrix);

    return 0;
}