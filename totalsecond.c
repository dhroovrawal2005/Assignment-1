#include <stdio.h>
int main(){
    int totalsecond, hr, min, sec;

    printf("write total second: ");
    scanf("%d",&totalsecond);

    hr=totalsecond/3600;
    min=(totalsecond%3600)/60;
    sec=totalsecond%60;
    printf("TIME: %d %d %d",hr,min,sec);
    return 0;

}