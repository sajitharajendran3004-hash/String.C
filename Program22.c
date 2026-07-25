#include <stdio.h>

int main() {
    char str[100], ch;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            printf("First occurrence at position %d", i + 1);
            return 0;
        }
    }

    printf("Character not found");

    return 0;
}
