#include <stdio.h>

int main() {
    int n, i, num, max1, max2;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    scanf("%d", &num);
    max1 = max2 = num;
    for (i = 2; i <= n; i++) {
        scanf("%d", &num);
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num != max1) {
            max2 = num;
        }
    }
    printf("Max = %d\nSecond Max = %d\n", max1, max2);
    return 0;
}
