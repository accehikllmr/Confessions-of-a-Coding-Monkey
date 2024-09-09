#include <stdio.h>
#include <math.h>

int main(void)
{
    //initializing variables used in Gauss Easter Algorithm
    int a, b, c, d, e, k, m, n, p, q, date, month, year, calendar;

    //prompting for choice of calendar, using numbers to use switch statements below
    printf("Are we using the Julian (0) or Gregorian (1) Calendar? ");
    scanf("%d", &calendar);

    printf("In which year would you like to know the date for Easter? ");
    scanf("%d", &year);

    if (year > 0)
    {
        //common values across calendars
        a = year % 19;
        b = year % 4;
        c = year % 7;

        //calculates different values for m and n based switch case, and default halts program
        switch (calendar)
        {
            case 0:
                m = 15;
                n = 6;
                break;
            case 1:
                k = floor(year / 100);
                p = floor((13 + 8*k) / 25);
                q = floor(k / 4);
                m = (15 - p + k - q) % 30;
                n = (4 + k - q) % 7;
                break;
            default:
                printf("Please choose a valid option for the calendar.\n");
                return 0;
        }

        //more common values across calendars
        d = (19*a + m) % 30;
        e = (2*b + 4*c + 6*d + n) % 7;

        //condition for date being during the month of March
        if (d + e < 10)
        {
            month = 3;
            date = d + e + 22;
        }
        //condition for date being during the month of April
        else
        {
            month = 4;
            //condition specific for the date being April 19
            if (d == 29 && e == 6)
            {
                date = 19;
            }
            //condition specific for the date being April 18
            else if (d == 28 && e == 6 && a > 10)
            {
                date = 18;
            }
            //otherwise any other date in the month of April
            else
            {
                date = d + e - 9;
            }
        }

        //switch statements to create different outputs for each calendar
        switch(calendar)
        {
            case 0:
                printf("Easter in the year %d is in the month 0%d and on the day %d in the Julian Calendar.\n", year, month, date);
                break;
            case 1:
                printf("Easter in the year %d is in the month 0%d and on the day %d in the Gregorian Calendar.\n", year, month, date);
                break;
            default:
                printf("Please choose a valid option for the calendar.\n");
                return 0;
        }
    }
    else
    {
        printf("The year entered is invalid. Please enter a year larger than 0.\n");
    }

    return 0;
}
