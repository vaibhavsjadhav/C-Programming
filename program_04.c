#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    printf("a: %d", a++); // a = 11
    printf("a: %d", ++a); // a = 12
    printf("a: %d", a++); // a = 12

    return 0;
}