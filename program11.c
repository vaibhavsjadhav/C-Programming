/*
Program Name: Making Simple Mini calculator using switch case & functions methods.

Date & Time : 2/ - 10 - 2022 //8.51am

Author: Vaibhav Jadhav

*/

/*program start*/
/*header files start*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
/*header files end */

/*Function Declaration*/
int addition();
int subtraction();
int division();
int multiplication();
/*Function Declaration*/

int main()
{
    int op;
    do
    {
        printf("Select An operation to calculate the difference between two numbers and return the result.\n");
        printf("\n 1.Addition \t \t 2.Subtraction \n 3.Multiplication \t 4.Division \n 5.Exit \t \t 6.Clear \n \n Please Make a Choice : ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            exit(0);
            break;
            /*
            this method is not working so pls help me how to solve this bug.

            case 6:
                clrscr();
                break;
            */

        default:
            printf("Your Entered Wrong Operation \n \n");
            break;
        }

        printf("\n\t***********************************************************\n\n");

    } while (op != 5);

    return 0;
}
// use addition() function to addition two number
int addition()
{
    int n1, n2, sum;

    printf("Enter the first number :");
    scanf("%d", &n1);

    printf("Enter the second number :");
    scanf("%d", &n2);

    sum = n1 + n2;

    printf("Total Sum of the Number is : %d \n \n", sum);

    return 0;
}
// use subtract() function to subtract two numbers
int subtraction()
{
    int n1, n2, sub;

    printf("Enter the first number :");
    scanf("%d", &n1);

    printf("Enter the second number :");
    scanf("%d", &n2);

    sub = n1 - n2;

    printf("Total Sum of the Number is : %d \n \n", sub);
}
// use multiplication() function to multiply two numbers
int multiplication()
{
    int n1, n2, mul;

    printf("Enter the first number :");
    scanf("%d", &n1);

    printf("Enter the second number :");
    scanf("%d", &n2);

    mul = n1 * n2;

    printf("Total Sum of the Number is : %d \n \n", mul);
}
// use division() function to divide two numbers
int division()
{
    int n1, n2, kal;

    printf("Enter the first number :");
    scanf("%d", &n1);

    printf("Enter the second number :");
    scanf("%d", &n2);

    kal = n1 / n2;

    printf("Total Sum of the Number is : %d \n \n", kal);
}