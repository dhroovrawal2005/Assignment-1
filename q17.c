#include <stdio.h> 
int main () {
    int a, b, c;

    printf("WRITE THREE NO. (a b c): ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>=b && a>=c)
    {
        printf("MAX NO. IS: %d\n",a);

    }
     else if (b>=a && b>=c)
    {
        printf("MAX NO. IS: %d\n",b);
        
    }
    else 
    {
        printf("MAX NO. IS: %d\n",c);
    }
    return 0;
    
}