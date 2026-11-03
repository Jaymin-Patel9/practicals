#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char *word[20];
    char *token;
    int i = 0, j;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    token = strtok(name, " ");

    while(token != NULL && i < 20)
    {
        word[i] = token;
        i++;

        token = strtok(NULL, " ");
    }

    printf("Abbreviated name: ");

    for(j = 0; j < i-1; j++)
    {
        printf("%c. ", word[j][0]);
    }

    if(i > 0)
    {
        printf("%s", word[i-1]);
    }

    return 0;
}
