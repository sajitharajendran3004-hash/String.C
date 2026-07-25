#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[20][20];
    int count[20] = {0};
    int i = 0, j = 0, k, n = 0;

    printf("Enter sentence: ");
    scanf("%[^\n]", str);

    char *token = strtok(str, " ");

    while(token != NULL) {
        strcpy(words[n++], token);
        token = strtok(NULL, " ");
    }

    for(i = 0; i < n; i++) {
        if(count[i] != -1) {
            count[i] = 1;

            for(j = i + 1; j < n; j++) {
                if(strcmp(words[i], words[j]) == 0) {
                    count[i]++;
                    count[j] = -1;
                }
            }
        }
    }

    for(i = 0; i < n; i++) {
        if(count[i] != -1)
            printf("%s = %d\n", words[i], count[i]);
    }

    return 0;
}
