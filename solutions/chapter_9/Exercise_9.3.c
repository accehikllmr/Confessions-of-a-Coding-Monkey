#include <stdio.h>
#include <math.h>
#include <string.h>
#define sqfToSqin 1/144

int main(void)
{
    double maxDeflection, uniformLoad, beamLength, modElectricity, momentInertia, liveLoad, jointSpacing;

    //additional feature : converts input data according to given units
    //char units;
    //printf("What units of measurement will you use for the input data (m, mm or in)? ");
    //currently, all input values must use imperial units (inches)

    printf("What is the live load of the beam in pounds per square foot? ");
    scanf("%lf", &liveLoad);

    printf("What is the spacing between the joints in inches? ");
    scanf("%lf", &jointSpacing);

    printf("What is the length of the beam in inches? ");
    scanf("%lf", &beamLength);

    printf("What is the electricity modulus for the beam in pounds per square inch? ");
    scanf("%lf", &modElectricity);

    printf("What is the moment of the moment of inertia for the beam in inches cubed cubed? ");
    scanf("%lf", &momentInertia);

    //condition needed to yield an output, otherwise returns error message
    if (liveLoad > 0 && jointSpacing > 0 && beamLength > 0 && modElectricity > 0 && momentInertia > 0)
    {
        uniformLoad = (liveLoad * sqfToSqin) * jointSpacing;
        maxDeflection = ((5 * uniformLoad * pow(beamLength, 4)) / (384 * modElectricity * momentInertia));

        printf("The maximum midspan deflection of the beam is %.3lf inches.\n", maxDeflection);
    }
    else
    {
        printf("All input values must be greater than 0.\n");
    }
    return 0;
}
