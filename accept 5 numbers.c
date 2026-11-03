#include <stdio.h>

int main()
{
    int num[5], i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("The numbers are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
