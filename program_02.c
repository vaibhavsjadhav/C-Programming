#include <stdio.h>

/* main method */
int main()
{
    /* dataTypes & variables */

    int n1, n2, add, sub, multi, div;

    /* input */

    printf("enter the first num :");
    scanf("%d", &n1);

    printf("enter the second num :");
    scanf("%d", &n2);

    /* process */

    add = n1 + n2;
    sub = n1 - n2;
    multi = n1 * n2;
    div = n1 / n2;

    /* output*/

    printf("add of two number is :%d\n", add);
    printf("sub of two number is :%d\n", sub);
    printf("multi of two number is :%d\n", multi);
    printf("div of two number is :%d\n", div);

    return 0;
}