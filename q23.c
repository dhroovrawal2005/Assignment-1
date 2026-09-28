#include <stdio.h>
int main ()
{
   int a,b,i,result=1;

   printf("write the number: ");
   scanf("%d",&a);

   printf("write power of a: ");
   scanf("%d",&b);

if (b<0)
{
    printf("result does not exist ");
}
else {
    for (i=1; i<=b; i++)
    {
        result *= a;
    }
    printf("%d^%d = %d",a,b,result);
}
    return 0;
}
