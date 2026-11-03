#include <stdio.h>

int main()
{
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i, count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Required notes:\n");

    for(i = 0; i < 9; i++)
    {
        count = amount / notes[i];

        if(count > 0)
        {
            printf("%d notes of Rs. %d\n", count, notes[i]);
        }

        amount = amount % notes[i];
    }

    return 0;
}
