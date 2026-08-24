#include <stdio.h>
int main() {
    
   float sub1,sub2,sub3,total,av;

   printf("enter marks of first subject:");
   scanf("%f",&sub1);
   printf("enter marks of second subject:");
   scanf("%f",&sub2);
   printf("enter marks of third subject:");
   scanf("%f",&sub3);

   total=sub1+sub2+sub3;
   av=total/3;

   if(av>=70 && sub1>35 && sub2>35 && sub3>35)
   {
    printf("you have secured distinction");
   }
   else if(av>=60 && sub1>35 && sub2>35 && sub3>35)
   {
    printf("you have secured first class");
   }
   else if(av>=50 && sub1>35 && sub2>35 && sub3>35)
   {
    printf("you have secured second class");
   }
   else if(av>=35 && sub1>35 && sub2>35 && sub3>35)
   {
    printf("you have secured third class");
   }
   else{
    printf("you have faied");
   }
   printf("\n");
   printf("your total is %f,and average is %f",total,av);
return 0;
}
