#include <stdio.h>

int main(){

        int n,r=0;

        printf("count digit of some number n:");
        scanf("%d",&n);

        while(n>0)
        {
                n=n/10;
                r++;
                
        }

        printf("%d",r);

        
return 0;
}
