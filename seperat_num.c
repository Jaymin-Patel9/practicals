#include <stdio.h>

int main(){

        int n,r;

        printf("seperate digits of number n:");
        scanf("%d",&n);

        while(n>0)
        {
                r=n%10;
                printf("%d\n",r);
                n=n/10;
        }

        
return 0;
}
