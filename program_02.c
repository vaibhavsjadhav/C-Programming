/*

Program Name :GetInput & Output From User

Date & Time : 4 - 10 - 2022

Author : Vaibhav Jadhav

*/

/* program start */

#include <stdio.h>

/* main method */
int main()
{
    /* dataTypes & variables */

    int n1, n2, result;

    /* input */

    printf("enter the first num :");
    scanf("%d", &n1);

    printf("enter the second num :");
    scanf("%d", &n2);

    /* process & Output */
    // Add
    result = n1 + n2;
    printf("add of two number is :%d\n", result);
    // Sub
    result = n1 - n2;
    printf("sub of two number is :%d\n", result);

    // Multi
    result = n1 * n2;
    printf("multi of two number is :%d\n", result);

    // Div
    result = n1 / n2;
    printf("div of two number is :%d\n", result);

    /* Program Stop */
    return 0;

    /* program end */
}