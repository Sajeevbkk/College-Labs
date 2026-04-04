#include <stdio.h>

int main()
{
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    int array[limit];
    printf("Enter %d elements: ", limit);
    for (int i=0; i<limit; i++) scanf("%d", &array[i]);

    while (limit>1)
    {
        for (int i=0; i<limit-2; i++)
        {
            if (array[i]>array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        limit--;
    }

    for (int i=0; i<limit; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}