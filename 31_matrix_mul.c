#include <stdio.h>

void read_matrix(int row, int col, int m[row][col]);
void mul_matrix(int r1, int comm, int col2, int m1[][comm], int m2[][col2]);

int main()
{
    int r1, col1, r2, col2;
    printf("Enter number of rows & column of first matrix: ");
    scanf("%d %d", &r1, &col1);
    printf("Enter number of rows & column of second matrix: ");
    scanf("%d %d", &r2, &col2);

    if (col1 != r2)
    {
        printf("Wrong matrix sizes\n");
        return -1;
    }

    int m1[r1][col1];
    read_matrix(r1, col1, m1);
    int m2[r2][col2];
    read_matrix(r2, col2, m2);

    mul_matrix(r1, col1, col2, m1, m2);

    return 0;
}

void read_matrix(int row, int col, int m[row][col])
{
    printf("Enter %d numbers: ", row*col);
    for(int i = 0; i < row; i++)
        for(int j = 0; j < col; j++)
            scanf("%d", &m[i][j]);
}

void mul_matrix(int r1, int comm, int col2, int m1[][comm], int m2[][col2])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int sum = 0;
            for (int k = 0; k < comm; k++)
            {
                sum += m1[i][k] * m2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}