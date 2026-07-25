#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str1);

    strcpy(str2, str1);

    printf("Copied String = %s", str2);

    return 0;
}
