#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numberStudents;

    printf("Enter number of Students:");
    scanf("%d", &numberStudents);


    for (int i = 1;i <= numberStudents; i++)
    {
        char regNo [25];
        char name [50];
        int marks;
        char grade;

        printf("\n---- Student %d Input ---\n", i);

        printf("Enter Registration Number:");
        scanf(" %24[^\n]", regNo);

        printf("Enter Name:");
        scanf(" %49[^\n]", name);

        printf("Enter Marks:");
        scanf("%d",&marks );

        //Determining Grade using if-else-else
        if (marks >= 70)
        {
            grade='A';
        }
        else if (marks >= 60)
        {
            grade = 'B';
        }
        else if (marks >= 50)
        {
            grade = 'C';

        }
        else if (marks >= 40)
        {
            grade = 'D';

        }

        else
        {
            grade = 'F';
        }

        //Student info
        printf("-------------------------\n");
        printf("   STUDENT INFORMATION   \n");
        printf("-------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);


        //Pass/Fail status
        if (marks >= 40)
        {
            printf("Status: Passed\n");
        }
        else
        {
            printf("Status: Failed\n");
        }

        printf("-------------------------\n");
    }







    return 0;
}
