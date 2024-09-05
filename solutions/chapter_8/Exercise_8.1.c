#include <stdio.h>
#include <math.h>
#include <assert.h>

int main(void)
{
    double originalVolume, mutantVolume, originalLength, mutantLength;

    printf("What is the original volume of the organism? ");
    scanf("%lf", &originalVolume);

    printf("What is the original length of the organism? ");
    scanf("%lf", &originalLength);

    printf("What is the mutant length of the organism? ");
    scanf("%lf", &mutantLength);

    //reminder that assert halts the program upon returning false, so conditions allow it to print error statements
    //perhaps assert statements are meant to be used for testing, meaning once error messaging exists they become obsolete
    if (originalVolume <= 0 || originalLength <= 0 || mutantLength <=0)
    {
        printf("The dimensions must all be above zero in value.\n");
        assert(originalVolume > 0 && originalLength > 0 && mutantLength > 0);
    }
    else if (originalLength > mutantLength)
    {
        printf("The mutant length must be larger than the original length\n.");
        assert(originalLength < mutantLength);
    }
    else
    {
        mutantVolume = originalVolume * pow((mutantLength / originalLength), 3);
        printf("The mutant volume of the organism is %.0lf meters cubed.\n", mutantVolume);
    }

    return 0;
}
