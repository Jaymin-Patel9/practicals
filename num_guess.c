#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /*number guessing*/

    int n=0,i=1,j=0;

    srand(time(NULL));
    int rndom=(rand()%10+1);

    printf("enter num:");
    scanf("%d",&n);

    while(i>0)
    {
        if(rndom>n)
        {
            printf("number is too low\n");
             printf("enter num:");
             scanf("%d",&n);
        }
        else if(n>rndom)
        {
            printf("number is too high\n");
             printf("enter num:");
             scanf("%d",&n);
        }
        else if(rndom==n)
        {
            printf("you got it!\n");
            i=0;
        }
        j++;

    }
    printf("you got it in %d tries",j);
  
    return 0;
}
