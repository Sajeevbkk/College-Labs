/* Write a function for checking whether a string is palindrome. Using this function display
the palindrome words in a line of text. */

#include <stdio.h>
#include <string.h>

void check_palindrome(char word[]);
void split_sent(char sent[]);
int found_palindrome = 0;

int main()
{
    char sent[100];
    printf("Enter something: ");
    fgets(sent, sizeof(sent), stdin);

    split_sent(sent);

    if (found_palindrome == 0)
        printf("Found Nothing!!\n");

    return 0;
}

void split_sent(char sent[])
{
    for (int i = 0;
         i < strlen(sent) && sent[i] != '\n';
         i++)
    {
        char word[30];
        int j;
        for (j = 0; sent[i] != ' ' && sent[i] != '\n'; i++, j++)
            word[j] = sent[i];

        word[j] = '\0';

        check_palindrome(word);
    }
}

void check_palindrome(char word[])
{
    char rev[30] = {0};

    for (int i = strlen(word) - 1, j = 0; i >= 0; i--, j++)
        rev[j] = word[i];

    if (strcmp(rev, word) == 0)
    {
        printf("\nPalindrome: %s\n", rev);
        found_palindrome = 1;
    }
}