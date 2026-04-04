#include <stdio.h>
#include <math.h>

int main() {
    int row, column;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d%d", &row, &column);

    int matrix[row][column];
    printf("Enter %d elements: ", row*column);
    for (int i=0; i<row; i++)
        for (int j=0; j<column; j++)
            scanf("%d", &matrix[i][j]);

    for (int i=0; i<row; i++)
        for (int j=0; j<column; j++) {
            int digit = 0, num = matrix[i][j], rev_num = 0;
            while (num > 0) {
                num /= 10;
                digit++;
            }

            num = matrix[i][j];
            for (int k=digit-1; k>=0; k--) {
                rev_num += num % 10 * (pow(10, k));
                num /= 10;
            }

            if (matrix[i][j] == rev_num)
                printf("%d at [%d][%d] is palindrome\n", matrix[i][j], i, j);
        }

    return 0;
}