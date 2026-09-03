#include <stdio.h>

int main(){

        int n;
        int i=1;

        printf("how many natural numbers needed?:");
        scanf("%d",&n);

        printf("while loop\n");
        while(i<=n){

                printf("%d\n",i);
                i++;

        }

   
         printf("for loop\n");

        for(i=1;i<=n;i++){

                printf("%d\n",i);
        }

return 0;
}
