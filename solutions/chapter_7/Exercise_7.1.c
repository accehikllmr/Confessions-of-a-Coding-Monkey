#include <stdio.h>
#include <math.h>
//need to import this library to create a function which returns a bool type
#include <stdbool.h>
#define minutesPerHour 60

//function to check whether or not input is valid (larger than zero), returning bool type (true or false)
bool check_input(double);

int main(void)
{
    //using double data type instead of float data type since it is identical but has double the memory space, so less chance of issues
    double temperature, hours, minutes, time;

    //asking for input format hours separated from minutes by a space, so separating input into two values in scanf() function, : in between might have caused issues
    printf("How many hours and minutes have elapsed since the power failure? (hours minutes) ");
    scanf("%lf %lf", &hours, &minutes);

    //checking if either function call on input returns true (in this case, 1)
    if (check_input(hours) || check_input(minutes))
    {
        printf("The value(s) for hours and/or minutes must be digits superiors to to 0.\n");
    }
    else
    {
         //using value defined on line 5 for denominator in this equation
        time = hours + (minutes / minutesPerHour);
        temperature = ((4 * pow(time, 2))/(time + 2)) - 20;

        //output value increases with time since the temperature is inside of a freezer
        printf("The temperature inside the freezer after %.2lf hours have elapsed is %.1lf degrees Celcius.\n", time, temperature);
    }

    return 0;
}

//using this function is not efficient, much easier to simply write the boolean relation instead of the function call, but good practice
bool check_input(double x)
{
    return x <= 0;
}
