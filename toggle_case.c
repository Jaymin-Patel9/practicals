#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower((unsigned char)str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper((unsigned char)str[i]);
        }
    }

    printf("Toggle case: %s", str);

    return 0;
}
