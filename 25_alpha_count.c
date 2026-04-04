#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int freq[26] = {0};
    printf("Enter sentence: ");
    fgets(sentence, 100, stdin);

    for (int i=0; i<strlen(sentence); i++) {
        if (isalpha(sentence[i])) {
            freq[tolower(sentence[i]) - 'a']++;
        }
    }

    int max = 0;
    char letter;

    for (int i=0; i<26; i++) {
        if (freq[i] > max) {
            max = freq[i];
            letter = 'a' + i;
        }
    }

    printf("%c was used most (%d times)", letter, max);

    return 0;
}
