#include <stdio.h>
int main(){
    int a, b, c;

    printf("VALUE OF a: ");
    scanf("%d",&a);

    printf("VALUE OF b: ");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
    printf("AFTER SWAPPING: ");
    printf("a=%d\n",a);
    printf("b=%d\n",b);

    return 0;
}

