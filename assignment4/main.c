#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numbers[6][4]=
{
    {4,7,11,14},
    {1,12,19,8},
    {9,5,6,13},
    {2,3,10,15},
    {16,17,18,20},
    {23,25,26,27}
};
    int i, j;

    for (i=0;i<6;i++) //row index
    {
        for (int j=0;j<4;j++) //column index
        {
            printf("%d, ", numbers[i][j]);

    }
    printf("\n");
    }


    return 0;
}
