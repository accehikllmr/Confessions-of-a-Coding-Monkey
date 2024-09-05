//COPY OF PROGRAM FOR EXERCISE 3.3 (3.4 IN BOOK) BUT WITH ADDED DEFENSIVE PROGRAMMING

#include <stdio.h>
#include <math.h>

int main() {

    //declaring all variables at once, according to their common types (enter integers as floats to avoid calculation problems)
    float newsUse, massUse, energyUse, tonUse, volumeUse, treeUse;
    const float NEWSMASS = 0.3, NEWSENERGY = 61, TONKG = 0.001, WOODFIBRE = 1.8, TREEVOLUME = 0.25;

    printf("Newspaper used per week: ");

    while (1)
    {
        scanf("%f", &newsUse);

        if (newsUse < 0)
        {
            printf("The newspapers used in a week cannot be negative.\nPlease try again: ");
        }
        else
        {
            break;
        }
    }

    //calculations to determine the amount of energy used the given mass of newspapers
    massUse = newsUse * NEWSMASS;
    energyUse = massUse * NEWSENERGY;

    //calculation to determine the number of trees used to make the given mass of newspapers
    tonUse = massUse * TONKG;
    volumeUse = tonUse * WOODFIBRE;
    treeUse = ceil(volumeUse / TREEVOLUME);

    printf("Approximately %0.f Megajoules of energy and %0.f whole trees were used to produce %0.f kilograms of newspaper.\n", energyUse, treeUse, massUse);

    return 0;
}
