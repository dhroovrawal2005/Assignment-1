#include <stdio.h>

int main() {
    int operator;
    double a, b, result;

    printf("Enter operator (1='+')(2='-')(3='*')(4='/'): ");
    scanf(" %d", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case 1 :
            result = a + b;
            printf("Result: %f\n", result);
            break;
        case 2 :
            result = a - b;
            printf("Result: %f\n", result);
            break;
        case 3 :
            result = a * b;
            printf("Result: %f\n", result);
            break;
        case 4 :
            if (b != 0) {
                result = a / b;
                printf("Result: %f\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
