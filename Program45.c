#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int pos, i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter character: ");
    scanf(" %c", &ch);

    for(i = strlen(str); i >= pos; i--)
        str[i + 1] = str[i];

    str[pos - 1] = ch;

    printf("Result = %s", str);

    return 0;
}
