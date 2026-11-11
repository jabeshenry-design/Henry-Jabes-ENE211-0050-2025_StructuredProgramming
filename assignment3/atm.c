#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Function prototype
bool login();
void displayMenu();
void checkBalance();
void deposit(double amount);
void withdraw(double amount);


const int correctPIN = 4656;
double balance = 6000.00;

int main()
{
    int choice;
    double amount;


    printf("================================\n");
    printf("       WELCOME TO YOUR ATM\n");
    printf("================================\n");

    if (login()== false)
    {
        printf("Access denied!");
        return 0;

    }
    // Repeat menu untill user chooses Exit
    do
    {
        displayMenu();

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance();
            break;
        case 2:
            printf("Enter amount to deposit:");
            scanf("%lf", &amount);
            deposit(amount);
            break;
        case 3:
            printf("Enter amount to withdraw:");
            scanf ("%lf",&amount);
            withdraw(amount);
            break;
        case 4:
            printf("You have Exited Successfully\n");
            break;

        default:
            printf("Invalid choice!");

        }


    } while (choice !=4);

    return 0;

}

//Verify login details
bool login()
{
    int userInput;
    int attempts;



    for (attempts = 1; attempts<=3; attempts++)
    {
        printf("Enter your PIN:");
        scanf("%d", &userInput);

        if (userInput==correctPIN)
        {
            printf("Login Successfully\n");
            return true;

        }
        else
        {
            printf("Incorrect PIN!\n");
            printf("Attempts remaining: %d\n", 3 - attempts);

        }

    }
      return false;
}

// MENU DISPLAY
void displayMenu()
{

    printf("\n========== ATM MENU ==========\n");
    printf("1. CHECK BALANCE\n");
    printf("2. DEPOSIT MONEY\n");
    printf("3. WITHDRAW MONEY\n");
    printf("4. EXIT\n");
    printf("==============================\n");

}

//CHECK BALANCE
void checkBalance()
{
    printf("Your current balance is:Ksh%.2f\n", balance);

}
// DEPOSIT MONEY
void deposit(double amount)
{
    if(amount > 0)
    {
        balance = balance + amount;
        printf("Deposit successful!\n");
        printf("New balance: Ksh %.2f\n", balance);

    }
    else
    {
        printf("Invalid amount!Deposit must be positive");

    }
}
// WITHDRAW MONEY
void withdraw(double amount)
{
    if (amount <=0)
    {
        printf("Invalid amount!");

    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");

    }
    else
    {
        balance = balance -amount;
        printf("Withdrawal successful!\n");
        printf("Remaining balance: Ksh%.2f\n", balance);
    }

}
