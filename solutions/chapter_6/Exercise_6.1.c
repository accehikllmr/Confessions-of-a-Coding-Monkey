#include <stdio.h>

int main(void) {

    double jovianYears, earthYears;

    printf("How many Jovian years have passed? ");

    //defensive programming to prevent negative values, but character still allowed
    while (1)
    {
        scanf("%lf", &jovianYears);

        if (jovianYears < 0)
        {
            printf("The time elapsed must be equal to or greater than zero.\nPlease try again: ");
        }
        else
        {
            break;
        }
    }

    //this line must follow the assignment of a value to jovianYears, otherwise calculation is made with initial empty variable
    earthYears = jovianYears * 12;

    //place dot followed by number for digits after decimal, otherwise it will limit numbers before the dot
    printf("%.1lf Earth years have passed.\n", earthYears);

    return 0;
}
