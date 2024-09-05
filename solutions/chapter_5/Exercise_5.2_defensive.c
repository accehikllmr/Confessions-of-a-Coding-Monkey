#include <stdio.h>
#define cubicINgal 231
#define squareIN 144

//functions to check whether or not the user input is any good, it seems that it's quite difficult to protect against bad inputs using the scanf() function
//separate functions for different data types, since don't yet know how to mix data types into one function, for the return
//so, both function are identical, other than the returned data type
double check_double(void);
int check_integer(void);

int main(void)
{
    double rainB_cap, houseW, houseL, roofP;
    double rainB_capSUM, roof_SA, inches_rain;
    int n_rainB;

    printf("Capacity of a rain barrel (gallons)? ");
    rainB_cap = check_double();

    printf("Number of rain barrels? ");
    n_rainB = check_integer();

    printf("Width of the house (inches)? ");
    houseW = check_double();

    printf("Length of the house (inches)? ");
    houseL = check_double();

    printf("Portion of the roof emptying into barrels (percentage)? ");     //unable to use percentage sign here, since interpreted as a format specifier
    roofP = check_double();

    //Calculate the surface area of the roof draining into the barrels in square inches
    roof_SA = houseW * houseL * squareIN * (roofP / 100.0);

    //Calculate the total barrel capacity
    rainB_capSUM = n_rainB * rainB_cap * cubicINgal;

    //Calculate the number of inches of rain required
    inches_rain = rainB_capSUM / roof_SA;

    printf("There are %.2f inches of rain required.\n", inches_rain);

    return 0;
}

double check_double(void)
{
    //variable for value returned by function
    double input;

    //infinite loop which ends by returning a value, otherwise it continues asking for input since a mistake was made
    while (1)
    {
        scanf("%lf", &input);

        //finds characters in input (although not sure how it knows to check the input variable) and if not a digit, it will print the message below
        //bug -> prints the statement a number of times equal to the number of non-digit characters (if avoided with second condition, then it did not
        //print for following entries, but program still worked)
        if (getchar() != '\n')
        {
            printf("Invalid entry: The entry must be a digit, not a character.\nPlease try again:\n ");
        }
        //for values less than zero, which are not possible
        //no distinction here for the specific variables (ex: percentage cannot exceed 100)
        else if (input <= 0)
        {
            printf("Invalid entry: The value must be larger than 0.\nPlease try again: ");
        }
        //if no problems with input values, returns value and assigns to variable where function call was made
        else
        {
            return input;
        }
    }
}

//function identical to one above, except for difference in data type returned
int check_integer(void)
{
    int input;

    while (1)
    {
        scanf("%d", &input);

        if (getchar() != '\n')
        {
            printf("Invalid entry: The entry must be a digit, not a character.\nPlease try again: ");
        }
        else if (input <= 0)
        {
            printf("Invalid entry: The entry can only contain digits and must be larger than 0.\nPlease try again: ");
        }
        else
        {
            return input;
        }
    }
}
