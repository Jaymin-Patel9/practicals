#include <stdio.h>

int main(){

        int n,r,i=1,sum=0;


        printf("Print sum of all nos. divisible by 13 in the range of n:");
        scanf("%d",&n);

         printf("\n");
        printf("while loop\n");
       

        while(i<=n){

               r=i%13;
               if(r==0){

                sum=sum+i;
               }
               
                i++;

        }
        printf("%d\n",sum);

        printf("\n");
        printf("for loop\n");
        sum=0;


        for(i=1;i<=n;i++){

            r=i%13;
               if(r==0){

                sum=sum+i;
               }
               
                
        }
        printf("%d",sum);
         

return 0;
}
