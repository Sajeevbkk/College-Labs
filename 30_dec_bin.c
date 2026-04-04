#include <stdio.h>

int dec_to_bin(int n);

int main()
{
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);

    int decimals[limit];
    printf("Enter %d numbers: ", limit);
    for(int i = 0; i < limit; i++)
        scanf("%d", &decimals[i]);

    for(int i = 0; i < limit; i++)
        printf("%d in binary = %d\n", decimals[i], dec_to_bin(decimals[i]));

    return 0;
}

int dec_to_bin(int n)
{
    int remainder = n % 2, quotient = n / 2;

    if (quotient == 0) return remainder;

    return dec_to_bin(quotient)*10 + remainder;
}