#include <stdio.h>
int main() {
    float p, r, t, s;
    printf("enter the principal amount: ");
    scanf("%f",&p);
    
    printf("enter rate of interest: ");
    scanf("%f",&r);

    printf("enetr time period; ");
    scanf("%f",&t);

    s=(p*r*t)/100;
    printf("Simple Interest = %f",s);
    return 0;
}