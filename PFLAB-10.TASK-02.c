#include <stdio.h>

int main() {
    char email[50];
    int i, start=0;

    printf("Enter email: ");
    scanf("%s", email);

    for(i=0; email[i]!='\0'; i++){
        if(email[i]=='@'){
            start = i + 1;
            break;
        }
    }

    printf("Domain: ");
    for(i=start; email[i]!='\0'; i++)
        printf("%c", email[i]);
}

