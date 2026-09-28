#include <stdio.h>
int main() {
    int english, hindi, maths, eco, chem, sum, percentage;
    printf("english score (out of 100): ");
    scanf("%d",&english);

    printf("hindi score(out of 100): ");
    scanf("%d",&hindi);

    printf("maths score (out of 100): ");
    scanf("%d",&maths);

    printf("eco score (out of 100): ");
    scanf("%d",&eco);

    printf("chem score (out of 100): ");
    scanf("%d",&chem);

    sum=english+hindi+maths+eco+chem ;
   printf("total marks of dhroov: %d \n",sum);

   percentage=(english+hindi+maths+eco+chem)/5 ;
   printf("total percentage of dhroov: %d",percentage);
   return 0;
}
