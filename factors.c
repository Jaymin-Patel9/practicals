#include <stdio.h>
#include <math.h>

int main(){

        int n,m=0,r=1;

        printf("factors of number n:");
        scanf("%d",&n);

        while(r<=n)
        {
               m=n%r;
               if(m==0)
               {
                printf("%d,",r);
               }
               r++;
        }     

        

        
return 0;
}
