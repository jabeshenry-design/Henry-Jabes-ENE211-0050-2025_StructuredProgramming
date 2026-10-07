#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter String (e.g. , your name):");
    scanf(" %49s", str);

    printf("You entered:  %s\n", str);
    size_t length = strlen(str);

    printf("The Length of the String:  %zu characters\n",length);

    return 0;
}
