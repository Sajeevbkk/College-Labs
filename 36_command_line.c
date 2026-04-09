/* Write a program to find the second largest number in a list of integers using command
line argument. */

#include <math.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    float lar1 = atof(argv[1]), lar2 = atof(argv[2]);
    if (lar1 < lar2)
    {
        float temp = lar1;
        lar1 = lar2;
        lar2 = temp;
    }
    for (int i = 3; i < argc; i++)
    {
        float temp = atof(argv[i]);
        if (lar1 < temp)
        {

            lar2 = lar1;
            lar1 =temp;
        } else if (temp > lar2 && temp != lar1)
        {
            lar2 = temp;
        }
    }
    printf("2nd largest number = %.2f\n", lar2);

    return 0;
}