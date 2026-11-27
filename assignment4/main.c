#include <stdio.h>
#include <stdlib.h>

int main()
{   int elements[5]={2,7,4,5,9};
    int i, j , temp_element;

    for (i=0;i<5 ;i++)
    {
        for(j=i+1;j<5;j++)
        {

            if (elements[i]>elements[j])
            {
            temp_element = elements[i];
            elements[i]=elements[j];
            elements[j]=temp_element;
            }
        }


    }
    printf("Elements of array in sorted ascending order:");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", elements[i]);
    }


    return 0;
}
