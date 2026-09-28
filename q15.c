#include <stdio.h>
int main (){
    int m1, m2, m3, m4, m5, total, percent;

    printf("write the marks of the subject (m1 m2 m3 m4 m5): ");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    total=m1+m2+m3+m4+m5;
    percent=(total)/5;

    printf("total percentage is: %d\n",percent);

    if (percent >= 60){
        printf("1st Divison");
    }
    else if (percent >= 50){
        printf("2nd Divison");
    }
    else if (percent >= 40){
        printf("3rd Dision");
    }
    else {
        printf("FAIL");
    }
    return 0;

} 