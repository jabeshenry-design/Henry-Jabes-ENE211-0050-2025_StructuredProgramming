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
        scanf("%24s", regNo);

        printf("Enter Name:");
        scanf("%49s", name);

        printf("Enter Marks:");
        scanf("%d",&marks );

        //Determining Grade using switch case
        switch (marks/10)
        {
        case 10:
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            grade = 'F';
            break;

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
