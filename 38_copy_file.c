/* Using command line arguments copy the content of one text file to another after
converting all lower case letters to upper case. */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "w");
    int c;

    while ((c = fgetc(f1)) != EOF)
    {
        c = toupper(c);
        fputc(c, f2);
    }
    fclose(f1);
    fclose(f2);
}