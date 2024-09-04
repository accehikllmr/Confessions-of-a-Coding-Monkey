#include <stdio.h>
#include <assert.h>
//creating variables which have constant values, unclear why this method is chosen instead of declaring with const and data type
//(ex: const double cubicINgal = 231;)
#define cubicINgal 231
#define squareIN 144

//created a function for assertions, makes extra lines of code but can reuse same line with different variables
//more about practicing using functions than efficiency
//could not include option for checking int value since seems to be much more difficult to define default function arguments than in Python
void test(double);

int main(void)
{
    double rainB_cap, houseW, houseL, roofP, rainB_capSUM, roof_SA, inches_rain;
    int n_rainB;

    //for each input statement, assertion added to prevent negative or impossible values, failed assertion aborts program
    //not user friendly, but avoids unwanted output -> for testing, not final build
    printf("Capacity of a rain barrel (gallons)? ");
    scanf("%lf", &rainB_cap);
    test(rainB_cap);

    printf("Number of rain barrels? ");
    scanf("%d", &n_rainB);
    test(n_rainB);

    printf("Width of the house (inches)? ");
    scanf("%lf", &houseW);
    test(houseW);

    printf("Length of the house (inches)? ");
    scanf("%lf", &houseL);
    test(houseL);

    printf("Portion of the roof emptying into barrels (percentage)? ");     //unable to use percentage sign here, since interpreted as a format specifier
    scanf("%lf", &roofP);
    assert(roofP > 0 && roofP <= 100);

    //Calculate the surface area of the roof draining into the barrels in square inches
    roof_SA = houseW * houseL * squareIN * (roofP / 100.0);

    //Calculate the total barrel capacity
    rainB_capSUM = n_rainB * rainB_cap * cubicINgal;

    //Calculate the number of inches of rain required
    inches_rain = rainB_capSUM / roof_SA;

    printf("There are %.2f inches of rain required.\n", inches_rain);

    return 0;
}

void test(double x)
{
    assert(x > 0);
}
