#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50], small[50];
    int i=0,j=0,min=100;

    printf("Enter sentence: ");
    scanf("%[^\n]",str);

    while(1){
        if(str[i]!=' '&&str[i]!='\0'){
            word[j++]=str[i];
        }else{
            word[j]='\0';
            if(j<min && j>0){
                min=j;
                strcpy(small,word);
            }
            j=0;
        }

        if(str[i]=='\0')
            break;

        i++;
    }

    printf("Smallest Word = %s",small);

    return 0;
}
