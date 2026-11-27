#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elements[]={3,2,2,5,};
    int i;
    int j;
    int count;

    printf("The unique elements found in the array are:\n");
     for (i=0;i<4;i++)
     {
         count = 0;

        for(j = 0; j < 4; j++)
        {
            if(elements[i] == elements[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            printf("%d ", elements[i]);
        }
    }


    return 0;
}
