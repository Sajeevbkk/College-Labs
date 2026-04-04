#include <stdio.h>

int main () {
    int width, symmetric = 1;
    printf("Enter one side length of square matrix: ");
    scanf("%d", &width);

    int matrix[width][width];
    printf("Enter %d elements: ", width*width);
    for (int i=0; i<width; i++)
        for (int j=0; j<width; j++)
            scanf("%d", &matrix[i][j]);

    printf("Your matrix\n");
    for (int i=0; i<width; i++) {
        for (int j=0; j<width; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<width; i++)
        for (int j=0; j<width; j++)
            if (matrix[i][j] != matrix[j][i]) symmetric = 0;

    if (symmetric == 1)
        printf("\nThe matrix is symmetric\n");
    else {
        printf("\nTranspose of the matrix\n");

        for (int i=0; i<width; i++) {
            for (int j=0; j<width; j++)
                printf("%d ", matrix[j][i]);
            printf("\n");
        }
    }

    return 0;
}