#include <stdio.h>

int main() {
    char str[100];
    int i=0, upper=0, lower=0;

    printf("Enter string: ");
    scanf("%[^\n]",str);

    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z')
            upper++;
        else if(str[i]>='a'&&str[i]<='z')
            lower++;

        i++;
    }

    printf("Uppercase = %d\n",upper);
    printf("Lowercase = %d",lower);

    return 0;
}
