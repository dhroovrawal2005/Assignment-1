#include <stdio.h>

int main() {
    int n, i, num, max, min;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    scanf("%d", &num);
    max = min = num;
    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("Max = %d\nMin = %d\n", max, min);
    return 0;
}
