#include <stdio.h>
int main () {
    char ch;

    printf("print any character: ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("character is CAPITAL LETTER\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("character is small letter\n");
    }

else if (ch >= '0' && ch <= '9') {
        printf("character is digit\n");
    }
    else {
        printf("character is SPECIAL CHARACTER ");
        }
      
return 0;
    
}