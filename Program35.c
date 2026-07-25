#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50], largest[50];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while(1) {
        if(str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if(j > max) {
                max = j;
                strcpy(largest, word);
            }

            j = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Largest Word = %s", largest);

    return 0;
}
