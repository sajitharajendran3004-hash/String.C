#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter compressed string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i += 2) {
        int count = str[i + 1] - '0';

        for(j = 1; j <= count; j++)
            printf("%c", str[i]);
    }

    return 0;
}
