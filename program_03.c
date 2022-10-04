/* program start */

#include <stdio.h>

/* main method */

int main()
{
    /* dataTypes & variables */

    int n1, n2;

    /* input */

    printf("\nenter the fitst num: ");
    scanf("%d", &n1);

    printf("\nenter the second num: ");
    scanf("%d", &n2);

    /* output*/
    printf("Number\tSquare\tCube\n");
    printf("====================\n");

    /* process */
    printf("%d\t%d\t%d\n", n1, n1 * n1, n1 * n1 * n1);
    printf("%d\t%d\t%d\n", n2, n2 * n2, n2 * n2 * n2);

    return 0;

    /* program end */
}