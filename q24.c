#include <stdio.h>
int main (){
    int x,y,n;
    printf("write the value of x; ");
    scanf("%d",&x);
    printf("write the value of n; ");
    scanf("%d",&n);

if (n==1){
    y=1+x ;

}
else if (n==2){
    y=1+x/n ;
    
}
else if (n==3){
    int power=1;
    for (int i=1;i<=n;i++){
        power *= x ;
     y=1+power;
    }
   
}
else {
    y=1+n*x ;

}
printf("value of y is : %d",y);

    return 0;
}