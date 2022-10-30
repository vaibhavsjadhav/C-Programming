// >     greater than              5 > 4 is TRUE
// <     less than                 4 < 5 is TRUE
// >=    greater than or equal     4 >= 4 is TRUE
// <=    less than or equal        3 <= 4 is TRUE
// ==    equal to                  5 == 5 is TRUE
// !=    not equal to              5 != 4 is TRUE

#include <stdio.h>
void date()
{
    int date;
day:
    printf("\nenter date:");
    scanf("%d", &date);
    if (date > 31)
    {
        printf("you have entered wrong date, try again\n");
        goto day;
    }

    int month;
m:
    printf("\nenter month:\n");
    scanf("%d", &month);
    if (month > 12)
    {
        printf("you have entered wrong month, try again\n");
        goto m;
    }
    if (date == 31)
    {
        if (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)
        {
            printf("entered month does not have 31 days, try again\n");
            goto day;
        }
    }

    int year;
y:
    printf("\nenter year:");
    scanf("%d", &year);
    if (year < 1)
    {
        printf("you have entered wrong year, try again\n");
        goto y;
    }

    printf("you have entered date : %d-%d-%d", date, month, year);
}

int main()
{
    date();
    return 0;
}