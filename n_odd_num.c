#include <stdio.h>

int main(){

        int n;
        int i=1;

        printf("how many odd natural numbers needed?:");
        scanf("%d",&n);

        printf("while loop\n");
        while(i<=(2*n)){

                printf("%d\n",i);
                i=i+2;

        }

   
         printf("for loop\n");

        for(i=1;i<=(2*n);i=i+2){

                printf("%d\n",i);
        }

return 0;
}
