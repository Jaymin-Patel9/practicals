#include <stdio.h>
#include <string.h>

int main()
{
    char book1[100], book2[100], book3[100];

    char *books[3];

    books[0] = book1;
    books[1] = book2;
    books[2] = book3;

    printf("Enter three book names:\n");

    fgets(book1, sizeof(book1), stdin);
    fgets(book2, sizeof(book2), stdin);
    fgets(book3, sizeof(book3), stdin);

    printf("\nBook names:\n");

    printf("%s", books[0]);
    printf("%s", books[1]);
    printf("%s", books[2]);

    return 0;
}
