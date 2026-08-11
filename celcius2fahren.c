#include <stdio.h>

int main(){

  float c,f;
  printf("celcius to fahrenheit\n");
  printf("Enter temperature in Celsius: ");
  scanf("%f",&c);
  f=(9.0/5.0)*c+32;
  printf("fahrenheit is:%f",f);


      return 0;
}
