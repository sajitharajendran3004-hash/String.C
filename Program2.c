#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Length = %lu", strlen(str));

    return 0;
}
