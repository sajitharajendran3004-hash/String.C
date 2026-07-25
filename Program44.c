#include <stdio.h>

int main() {
    char str[100], ch;
    int i, j = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character to delete: ");
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch)
            str[j++] = str[i];
    }

    str[j] = '\0';

    printf("Result = %s", str);

    return 0;
}
