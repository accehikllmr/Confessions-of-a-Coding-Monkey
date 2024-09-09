#include <stdio.h>
#include <math.h>
#define coefficient 79.18

int main(void)
{
    //not using camelCase naming convention, since textbook employs separation with underscores
    double energy_rate, flame_height;       //careful, used float with lf and all numbers scanned were given value of zero
    int wall_effect;

    printf("What is the height of the flame, in meters? ");
    scanf("%lf", &flame_height);

    //defensive condition, using if statement since infinite possible cases, returning 0 to halt program on invalid input
    if (flame_height <= 0)
    {
        printf("The height of the flame cannot be zero, or less than zero.\n");
        return 0;
    }

    printf("How many walls are surrounding the flame? ");
    scanf("%d", &wall_effect);

    //using switch statement instead of if statement since possible cases are well-defined (discrete)
    //also works well since number of adjacent walls does not directly correspond to factor (ex : 1 wall has effect factor of 2)
    switch (wall_effect)
    {
        case 0:
            wall_effect = 1;
            break;
        case 1:
            wall_effect = 2;
            break;
        case 2:
            wall_effect = 4;
            break;
        default:
            printf("Not a valid number of walls.\n");
            return 0;
    }

    energy_rate = ((coefficient * pow(flame_height, 2.5)) / wall_effect);
    printf("The energy release rate is %.2lf kilowatts.\n", energy_rate);

    return 0;
}
