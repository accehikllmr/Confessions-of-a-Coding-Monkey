#include <stdio.h>
#include <math.h>

double valid_input(void);

int main(void)
{
    double roofLength, roofWidth, gableHeight, slopedLength, roofArea;

    printf("What is the length of the roof? ");
    roofLength = valid_input();

    printf("What is the width of the roof? ");
    roofWidth = valid_input();

    printf("What is the gable height? ");
    gableHeight = valid_input();

    //pow(b, e) function can be used instead of writing base * base
    slopedLength = sqrt(pow(gableHeight, 2) + pow((0.5 * roofWidth), 2));
    roofArea = 2 * roofLength * slopedLength;

    printf("The surface area of the roof is %.1lf square meters.\n", roofArea);

    return 0;
}

double valid_input()
{
    double input;

    while (1)
    {
        scanf("%lf", &input);

        if (input <= 0)
        {
            printf("The dimensions must be greater than or equal to zero.\nPlease try again: ");
        }
        else
        {
            break;
        }
    }
    return input;
}
