#include <stdio.h>

int main() {

    int a,b,c,d;


    printf("calculate an electricity bil\n");
    printf("enter your units:");
    scanf("%d",&a);

    if(a<=100){
        b=5*a;

        printf("your bill is %d",b);
     }
     else if(a<=200){

     c=500+(7*(a-100));
     printf("your bill is %d",c);
     }

      else if(a>200){

     d=1200+(10*(a-200));
     printf("your bill is %d",d);

      }

   
    return 0;
}
