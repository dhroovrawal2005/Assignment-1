#include <stdio.h>
int main() {
    long totalseconds=31558150;
    int days, hr, min;

    days=totalseconds/86400;
    hr=(totalseconds%86400)/3600;
    min=(totalseconds%3600)/60;

    printf("convertion (days hr min): %d %d %d",days,hr,min);
    return 0;


}