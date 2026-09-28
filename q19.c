#include <stdio.h>
int main () {
    char C;

    printf("write any letter: ");
    scanf("%c",&C);
    
    (C>='a' && C<='z') 
    ? printf("LETTER IS IN SMALL CASE\n",C)
    : printf("LETTTER IS NOT IN SMALL CASE\n",C);
    return 0;

    
}