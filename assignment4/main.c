#include <stdio.h>
#include <stdlib.h>





int main()
{
    int elements[]={2,5,7};
    printf("The expected store into the array are: %d%d%d\n", elements[0],elements[1],elements[2]);
    printf("The expected store into the array in reverse are: %d%d%d", elements[2],elements[1],elements[0]);
    return 0;
}
