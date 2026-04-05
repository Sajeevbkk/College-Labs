/*  Implement the following string library functions using pointers :
1.string length (int StringLength(char *s))
2.string copy ( void StringCopy(char *s1, char *s2) )
3.string comparison ( int StringCompare (char *s1, char *s2))
4.string concatenation ( void StringConcat(char *s1, char *s2) ) */

#include <stdio.h>
#include <string.h>

int StringLength(char *str)
{
    int i = 0;
    while (*str++) i++;
    return i;
}

void StringCopy(char *s1, char *s2)
{
    while (*s1)
        *s2++ = *s1++;
    *s2 = '\0';
}

int StringCompare(char *str1, char *str2)
{
    while (*str1 && *str2) { // '\0' is a falsy value. Others are truthy.
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}

void StringConcat(char *s1, char *s2)
{
    while (*s1) s1++;
    while (*s2) *s1++ = *s2++;
    *s1 = '\0';
}

int main()
{
    char s1[100], s2[100];
    printf("Enter a string: ");
    fgets(s1, 100, stdin);
    printf("Enter another string: ");
    fgets(s2, 100, stdin);

    printf("StrLength(s1) = %d\n", StringLength(s1));
    printf("StrCompare(s1, s2) = %d\n", StringCompare(s1, s2));
    StringCopy(s1, s2);
    printf("\nAfter Copy:\nS1: %s\nS2: %s\n\n", s1, s2);
    StringConcat(s1, s2);
    printf("\nAfter Concat:\nS1: %s\nS2: %s\n\n", s1, s2);

    return 0;
}

