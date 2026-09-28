#include <stdio.h>
int main() {
    int hr, min, sec, total;

    printf("enter time (hr min sec): ");
    scanf("%d %d %d",&hr,&min,&sec);

    total=hr*3600+min*60+sec;
    printf("total seconds = %d",total);
    return 0;
}