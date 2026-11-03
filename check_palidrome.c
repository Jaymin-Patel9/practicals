#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        rev[i] = str[len - 1 - i];
    }

    rev[len] = '\0';

    if(strcmp(str, rev) == 0)
    {
        printf("Palindrome string.");
    }
    else
    {
        printf("Not a palindrome string.");
    }

    return 0;
}
