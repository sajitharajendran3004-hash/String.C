#include <stdio.h>

int main() {
    char str[100], oldch, newch;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter old character: ");
    scanf(" %c", &oldch);

    printf("Enter new character: ");
    scanf(" %c", &newch);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == oldch)
            str[i] = newch;
    }

    printf("Updated String = %s", str);

    return 0;
}
