#include <stdio.h>
int main(){
    int b, h;
    float Area;

    printf("BASE OF THE TRIANGLE: \n");
    scanf("%d",&b);

    printf("HEIGHT OF THE TRAINGLE: ");
    scanf("%d",&h);

    Area=0.5*b*h;
    printf("Area of the triangle: %f",Area);
    return 0;
}