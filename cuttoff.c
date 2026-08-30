#include <stdio.h>
int main(){
    float M, P, C, E, CM;

    printf("marks in mathematics out of 200:\n ");
    scanf("%f",&M);

    printf("marks in physics out of 200:\n ");
    scanf("%f",&P);

    printf("marks in chemistry out of 200:\n ");
    scanf("%f",&C);

    printf("marks in english out of 200:\n ");
    scanf("%f",&E);

    CM=M/2+P/2+C/2+E; 
    printf("cutt of marks is: %f",CM);
    return 0;
}