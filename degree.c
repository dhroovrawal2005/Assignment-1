#include <stdio.h>
int main() {
    float f, c;

    printf("Temperature in Fehrenheit: ");
    scanf("%f",&f);

    c=(f-32)*5/9;
    printf("Temperature in Centrigrade: %f",c);

    return 0;
}