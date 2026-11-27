#include <stdio.h>
#include <stdlib.h>





int main()
{
    int elements[]={2,5,7};
    int i,j;

    printf("The expected store into the array are:");
    for (i=0;i<3;i++)
    {
        printf("%d," ,elements[i]);
    }

    printf("\nThe expected store into the array in reverse are:");
     for (j=2;j>=0;j--)
    {
        printf("%d," ,elements[j]);
    }

    return 0;
}
