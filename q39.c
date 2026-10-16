#include <stdio.h>

int main() {
    int n, i, j;
    double sum = 0, fact;
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = 1;
        for (j = 1; j <= i; j++)
            fact *= j;
        sum += (double)i / fact;
    }
    printf("Sum = %.4lf\n", sum);
    return 0;
}
