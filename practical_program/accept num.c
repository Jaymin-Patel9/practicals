#include <stdio.h>

int main()
{
    int num[10], i;

    printf("Enter 10 numbers:\n");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("4th value = %d\n", num[3]);
    printf("7th value = %d\n", num[6]);
    printf("9th value = %d\n", num[8]);

    return 0;
}
