#include <stdio.h>
#include <stdlib.h>

int main()
{
    int element[5]={1,8,7,10};
    int value = 5;
    int pos = 2;
    int i;

    printf("The current list of the array : ");
    for (i = 0; i < 4; i++) {
        printf("%d ", element[i]);
    }

    for (i = 4; i >= pos; i--) {
        element[i] = element[i - 1];
    }

    element[pos - 1] = value;

    printf("\nAfter Insert the element the new list is : ");
    for (i = 0; i < 5; i++) {
        printf("%d ", element[i]);
    }

    return 0;
}
