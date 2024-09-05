#include <stdio.h>
#include <math.h>
#include <assert.h>
#define bsaConstant 0.007184
#define convertKgToPds 2.20462262

int main(void)
{
    double weightKg, weightPds, height, bodySurfaceArea;

    printf("What is your weight in pounds? ");
    scanf("%lf", &weightPds);

    weightKg = weightPds * convertKgToPds;

    printf("What is your height in centimeters (cm)? ");
    scanf("%lf", &height);

    if (weightKg <= 0 || height <= 0)
    {
        printf("The height and weight must be greater than zero.\n");
        assert(weightKg > 0 && height > 0);
    }
    else
    {
        bodySurfaceArea = bsaConstant * pow(weightKg, 0.425) * pow(height, 0.725);
        printf("The surface area of the given body is %.1lf square meters.\n", bodySurfaceArea);
    }
    return 0;
}
