#include <stdio.h>

int main(){

        int n,mul=1;
        int i=1;

        printf("factorial till a number:");
        scanf("%d",&n);

        printf("while loop\n");
        while(i<=n){

                mul=mul*i;
                
                i++;

        }
        printf("%d\n",mul);

   
         printf("for loop\n");
         mul=1;

        for(i=1;i<=n;i++){

                mul=mul*i;
                
        }
            printf("%d\n",mul);

return 0;
}
