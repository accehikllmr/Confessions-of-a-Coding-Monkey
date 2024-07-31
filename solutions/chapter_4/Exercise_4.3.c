#include <stdio.h>

//main changes are variable names to be more meaningful and consistent, along with white spaces and paragraphs to chunk related lines of code

int main(void) {

    double sizeAC, useHours, effAC, useCost, operationCost;

    printf("Size of air conditioner in cubic meters: ");
    scanf("%lf", &sizeAC);

    printf("Estimated hours of use per year: ");
    scanf("%lf", &useHours);

    printf("Air conditioner efficiency (SEER): ");
    scanf("%lf", &effAC);

    printf("Cost per kWh ($/kWh): ");
    scanf("%lf", &useCost);

    //invented function added since missing from original problem
    operationCost = (sizeAC * useHours * useCost) / effAC;

    printf("Estimated annual operating costs: $%.2f\n", operationCost);

    return 0;
}
