#include <stdio.h>

int main(){

        int n,r=0,rev=0,og;

        printf("check palindrome of number n:");
        scanf("%d",&n);
        og=n;

        while(n>0)
        {
               r=n%10;
               rev=rev*10+r;
               n=n/10;
        }

        if(rev==og)
        {
                printf("yes %d is a palindrome",og);
        }
        else{
                printf("nope");
        }

        
return 0;
}
