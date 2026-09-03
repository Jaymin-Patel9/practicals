#include <stdio.h>

int main(){

        int n,i=1,sum=0,num;
        float mean;


        printf("Calculate sum and mean of any n values.:");
        scanf("%d",&n);
        printf("\n");
        printf("while loop\n");
       

        while(i<=n){

             printf("enter nums:");
             scanf("%d",&num);
                sum=sum+num;
                i++;

             }
       
        printf("sum is %d\n",sum);
        printf("\n");
        printf("for loop\n");
        sum=0;


        for(i=1;i<=n;i++){
                
             printf("enter nums:");
             scanf("%d",&num);
             sum=sum+num;
                         
            }
        
        printf("sum is %d\n",sum);
        mean=sum/(n*1.0);
        printf("mean is %f",mean);
         

return 0;
}
