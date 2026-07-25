#include <stdio.h>

int main() {
    char str[100], oldc, newc;
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter old character: ");
    scanf(" %c", &oldc);

    printf("Enter new character: ");
    scanf(" %c", &newc);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == oldc)
            str[i] = newc;
    }

    printf("Result = %s", str);

    return 0;
}
