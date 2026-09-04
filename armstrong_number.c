#include <stdio.h>
#include <math.h>

int main(){

        int n,sum=0,r;

        printf("check armstrong of number n:");
        scanf("%d",&n);

        while(n>0)
        {
               r=n%10;
               sum=(sum)+pow(r,3);
               n=n/10;
        }

        printf("%d",sum);

        
return 0;
}
