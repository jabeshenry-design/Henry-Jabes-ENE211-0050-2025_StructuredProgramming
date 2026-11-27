#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int nextIndex=0;
int count=0;

void insert_value(int value);
void printSamples(void);

int main()
{
int value;

    printf("Enter sensor values (any non-number to quit):\n");
    while (scanf("%d", &value) == 1)
    {
        insert_value(value);
        printSamples();
    }
    printf("Physical array: ");

        for (int i = 0; i < BUFFER_SIZE; i++)
    {
        printf("%d ", buffer[i]);
    }

    printf("\n");

    printSamples();


    return 0;
}

void insert_value(int value){
    buffer[nextIndex] = value;
    nextIndex = (nextIndex + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE)
    {
        count++;
    }
}

void printSamples(void)
{
    int start;

    if (count == 0)
    {
        printf("Buffer is empty.\n");
        return;
    }

    if (count == BUFFER_SIZE)
    {
        start = nextIndex;
    }
    else
    {
        start = 0;
    }

    printf("Samples (oldest to newest): ");

    for (int i = 0; i < count; i++)
    {
        int index = (start + i) % BUFFER_SIZE;

        printf("%d ", buffer[index]);
    }

    printf("\n");
}
