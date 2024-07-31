#include <stdio.h>

//defining value for debugging, if 1 (True) then debug, if 0 (False) do not debug (triggers condition on line 19)
#define debug 0

int main(void)
{
    int num, den, mod;
    //variable to pause during tracing, using character data type did not work, not sure why
    int pause;
    //variable for controlling debugging using switch control structure
    int debugger;

    scanf("%d%d", &num, &den);
    //setting variable to control switch cases
    debugger = den;

    //condition for debugging using tracing with print statement, activation status given on line 4
    if (debug)
    {
        printf("numerator = %d\n", num);
        printf("denominator = %d\n", den);
        //taking user input to slow down tracing, giving time to anticipate result
        scanf("%d", &pause);
    }

    //chooses case based on value of denominator
    switch (debugger)
    {
        case 0:
            printf("numerator = %d\n", num);
            printf("denominator = %d\n", den);
            printf("Cannot divide by zero.");

        default:
            mod = num % den;
            printf("remainder = %d", mod);

        return 0;
    }
}
