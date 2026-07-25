#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0') {
        if(str[i] == ' ')
            count++;
        i++;
    }

    printf("Spaces = %d", count);

    return 0;
}
