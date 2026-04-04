#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter sentence: ");
    fgets(sentence, 100, stdin);

    for (int i=0; i<strlen(sentence)-1; i++) {
        for (int j=0; j<strlen(sentence)-i-1; j++) {
            if (sentence[j] > sentence[j+1]) {
                char temp = sentence[j];
                sentence[j] = sentence[j+1];
                sentence[j+1] = temp;
            }
        }
    }

    puts(sentence);

    return 0;
}
