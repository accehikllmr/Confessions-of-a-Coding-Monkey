#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    bool subzero, zero;
    double air_temp, wind_speed, wind_chill;

    printf("What is the temperature of the air in degrees Celcius? ");
    scanf("%lf", &air_temp);

    printf("What is the wind speed of the air in kilometers per hour? ");
    scanf("%lf", &wind_speed);

    //creating boolean statements separate from conditional statement, improved readability and understanding
    subzero = air_temp <= 0 && wind_speed >= 5;
    zero = air_temp == 0 && wind_speed > 0 && wind_speed < 5;

    if (subzero)
    {
        wind_chill = 13.12 + (0.6215 * air_temp) - (11.37 * pow(wind_speed, 0.16)) + (0.3965 * air_temp * pow(wind_speed, 0.16));
    }
    else if (zero)
    {
        wind_chill = air_temp + (wind_speed * ((-1.59 + 0.1345 * air_temp) / 5));
    }
    else
    {
        //according to the given information, wind chill in subzero temperature begins if wind speed surpasses 5 km/h
        //when the temperature is zero, only very slow winds are considered
        //in all other cases, we can assume that the air temperature equals the wind chill factor
        wind_chill = air_temp;
    }

    printf("The wind chill factor is %.1lf degrees Celcius.\n", wind_chill);

    return 0;
}
