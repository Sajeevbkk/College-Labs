/* Write a program to find the second largest number in a list of integers using command
line argument. */

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    float lar1 = atof(argv[1]), lar2 = lar1;
    for (int i = 2; i < argc; i++)
    {
        if (lar1 < atof(argv[i]))
        {
            lar2 = lar1;
            lar1 = atof(argv[i]);
        }
    }
    printf("2nd largest number = %.2f\n", lar2);

    return 0;
}