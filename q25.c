#include <stdio.h>
int main() {
    int x, i;

    printf("Write the table of: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("No table for non-positive numbers.\n");
    } else {
        printf("Multiplication Table of %d:\n", x);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", x, i, x * i);
        }
    }

    return 0;
}
