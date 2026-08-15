#include <stdio.h>

int main(){

  float i,p,r,n;
  printf("interest rate calculation\n");
  printf("Enter principle value: ");
  scanf("%f",&p);
  printf("Enter rate of interest: ");
  scanf("%f",&r);
  printf("Enter number of years: ");
  scanf("%f",&n);
  
  i=(r*p*n)/100;

  printf("interest rate is calculated to be %f",i);

      return 0;
}
