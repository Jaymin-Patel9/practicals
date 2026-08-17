#include <stdio.h>

int main() {

int a,b,c;

    printf("enter a:");
    scanf("%d",&a);
    
    printf("enter b:");
    scanf("%d",&b);
    
    printf("enter c:");
    scanf("%d",&c);

    if(a>b && c>a || a>c && a<b)
    {
        printf("%d is second largest",a);
    }
    else if(b>a && c>b || b>c && b<a)
    {
    printf("%d is second largest",b);
    }
    else
    {

    printf("%d is the second largest",c);
    }

    return 0;
}
