#include <stdio.h>
#include <setjmp.h>
#define cubicINgal 231
#define squareIN 144

//since variable needs to be used in all functions, it needs to be defined globally instead of within main
jmp_buf env;

//functions used to trigger exception based on given input value
//does not fully work for percentage, where it should not exceed 100 percent
void testDouble(double);
void testInt(int);

int main(void)
{
    double rainB_cap, houseW, houseL, roofP;
    double rainB_capSUM, roof_SA, inches_rain;
    int n_rainB;

    if (setjmp(env) == 0)
    {
        printf("Capacity of a rain barrel (gallons)? ");
        scanf("%lf", &rainB_cap);
        testDouble(rainB_cap);

        printf("Number of rain barrels? ");
        scanf("%d", &n_rainB);
        testInt(n_rainB);

        printf("Width of the house (inches)? ");
        scanf("%lf", &houseW);
        testDouble(houseW);

        printf("Length of the house (inches)? ");
        scanf("%lf", &houseL);
        testDouble(houseL);

        printf("Portion of the roof emptying into barrels (percentage)? ");     //unable to use percentage sign here, since interpreted as a format specifier
        scanf("%lf", &roofP);
        testDouble(roofP);

        //Calculate the surface area of the roof draining into the barrels in square inches
        roof_SA = houseW * houseL * squareIN * (roofP / 100.0);

        //Calculate the total barrel capacity
        rainB_capSUM = n_rainB * rainB_cap * cubicINgal;

        //Calculate the number of inches of rain required
        inches_rain = rainB_capSUM / roof_SA;

        printf("There are %.2f inches of rain required.\n", inches_rain);

        return 0;
    }

    else
    {
        printf("Exception: Input value cannot be inferior to zero.\n");

        return 0;
    }
}

//not using getchar() function in check functions, so character inputs break the program
void testDouble(double x)
{
    if (x <= 0)
    {
        longjmp(env, 3);
    }
}

void testInt(int x)
{
    if (x <= 0)
    {
        longjmp(env, 3);
    }
}
