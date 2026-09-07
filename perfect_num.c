#include <stdio.h>

int main() {
    int i=1,n,og,sum=0;

    printf("enter the given number:");
    scanf("%d",&og);

 for(i;i<og;i++)
 {
  n=og%i;
  if(n==0){
    sum=sum+i;
  }

 }
   if(sum==og)
    {
      printf("%d is perfect",og);
    }
    else{
      printf("%d is not perfect",og);
    }

    return 0;
}
