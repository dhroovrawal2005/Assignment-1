#include <stdio.h>
int main() {
    float basic, hr, da, gross;

    printf("YOUR BASIC SALARY: ");
    scanf("%f",&basic);

    hr= 0.5*basic ;
    da= 0.2*basic ;

    gross= basic+hr+da ;
    printf("YOUR GROSS SALARY IS: %f",gross);
    return 0;
}