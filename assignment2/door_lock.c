#include <stdio.h> // For printf() and scanf()
#include <stdlib.h>
#include <windows.h>
#include <string.h> //For strlen() and strcmp()

int main()
{
    // Declaring variables
    const char correctPIN[] = "4645";
    char user_input[25];

    int attempts = 0;
    int max_attempts = 3;
    int pin_unlocked = 0;

    //Display the system
    printf("=== PIN BASED DOOR LOCK SYSTEM ===\n");

    // user attempts to enter the PIN
    while (attempts < max_attempts)
    {
        printf("\n ENTER 4- DIGIT PIN:");
        scanf("%24s", user_input);

        // PIN LENGTH
        int pin_length = strlen(user_input);

        // Checking length
        if (pin_length < 4)
        {
            printf("PIN is Too Short(must be 4 digits)\n");
        }
        else if (pin_length > 4)
        {
            printf("PIN is Too Long(Must be 4 digits)\n");

        }

        else
        {
            printf("PIN exactly 4 digits\n");



            // Comparing entered PIN with correctPIN
            if (strcmp(user_input, correctPIN)==0)
            {
                pin_unlocked = 1;
                break;
            }

            else
            {
                printf("INCORRECT PIN!\n");
            }
        }


    //Increasing number of attempts
        attempts++;
        int remaining = max_attempts - attempts;

        if (remaining > 0)
        {
            printf("Remaining attempts: %d\n", remaining);

        }
    }

    // If failed 3 times
    if(!pin_unlocked)
    {
        printf("\nToo many Incorrect attempts.\n");
        printf("System locked! Wait for 5 seconds...\n");


        // Countdown
        for (int i = 5; i>= 1; i--)
        {
            printf("%d...\n", i);
            Sleep(1000);
        }
        printf("You can try again now.\n");
        return 0;

    }
    int choice;

    printf("\n --- DEVICE MENU ---\n");
    printf("1. Open Door\n");
    printf("2. Change UserName\n");
    printf("3. Change PIN\n");
    printf("4. Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Access granted. Door Unlocked\n");
        break;
    case 2:
        printf("Change UserName feature coming soon.\n");
        break;
    case 3:
        printf("Change PIN feature coming soon.\n");
        break;
    case 4:
        printf("Exiting system.\n");
        break;
    default:
        printf("Invalid Option!Please try again,\n");
        break;
    }



    return 0;
}
