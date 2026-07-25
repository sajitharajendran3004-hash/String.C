#include <stdio.h>

int main() {
    char str[100], ch;
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Positions: ");

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch)
            printf("%d ", i + 1);
    }

    return 0;
}
