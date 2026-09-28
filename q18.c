#include <stdio.h> 
int main () {
    int a, b, c, max;

    printf("WRITE THREE NO. (a b c): ");
    scanf("%d %d %d",&a,&b,&c);

    max= (a>b)?((a>c)?a:c) : ((b>c)?b:c);

    printf("MAX NO. IS: %d",max);
    return 0;
}