#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elements[3]={45,25,21};
    int max=elements[0];
    int min=elements[0];
    int i;

    for (i=1;i<3; i++){
        if (elements[i]>max){
            max = elements[i];
        }
        if (elements[i] < min){
        min =elements[i];
        }
    }
    printf("Maximum element is :%d\n", max);
    printf("Minimum element is :%d\n",min);


    return 0;
}
