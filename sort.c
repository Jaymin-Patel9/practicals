#include <stdio.h>

int main()
{
    int num[5], i, j, temp, choice;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4-i; j++)
        {
            if((choice == 1 && num[j] > num[j+1]) ||
               (choice == 2 && num[j] < num[j+1]))
            {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    printf("Sorted array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
