#include <stdio.h>

int main() {
    int row, column;
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d%d", &row, &column);

    int matrix[row][column];
    printf("Enter %d elements of matrix\n\t: ", row*column);
    for (int i=0; i<row; i++)
        for (int j=0; j<column; j++)
            scanf("%d", &matrix[i][j]);

    int largest = matrix[0][0], posr, posc;
    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            if (largest < matrix[i][j]) {
                largest = matrix[i][j];
                posr = i;posc = j;
            }
        }
    }

    printf("The largest element is matrix[%d][%d]= %d\n", posr, posc, largest);
    return 0;
}