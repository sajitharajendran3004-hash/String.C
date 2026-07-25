#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50];
    int i=0,j=0,k;

    printf("Enter sentence: ");
    scanf("%[^\n]",str);

    while(1){
        if(str[i]!=' '&&str[i]!='\0'){
            word[j++]=str[i];
        }else{
            for(k=j-1;k>=0;k--)
                printf("%c",word[k]);

            printf(" ");
            j=0;
        }

        if(str[i]=='\0')
            break;

        i++;
    }

    return 0;
}
