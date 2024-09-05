#include <stdio.h>
//defining constants for conversions, here instead of using const variable name = value
#define btuPerTon 12000
#define wattsPerKw 1000

int main(void)
{
    double acSize, useHours, acEfficiency, kwhCost, annualCost;

    printf("What is the size of the air conditioner in tons? ");
    scanf("%lf", &acSize);

    printf("What is the estimated hours of air conditioner use per season? ");
    scanf("%lf", &useHours);

    printf("What is the air conditioner efficiency (SEER)? ");
    scanf("%lf", &acEfficiency);

    printf("What is the cost of operating the unit per kWh? ");
    scanf("%lf", &kwhCost);

    //defensive programming to prevent values less than 0 in all inputs, but checks only once all inputs have been given
    if (acSize <= 0 || useHours <= 0 || acEfficiency <= 0 || kwhCost <= 0)
    {
        printf("All input values must larger than zero.\n");
    }
    else
    {
        annualCost = kwhCost * useHours * (((acSize * btuPerTon) / acEfficiency) / wattsPerKw);
        printf("The annual cost of operating the unit is %.2lf$\n", annualCost);
    }

    return 0;
}

