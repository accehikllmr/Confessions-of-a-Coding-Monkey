#include <stdio.h>

//switch for K&R style to BSD/Allman style (for added blank lines at beginning and end of structure)

int get_int(void);

int main(void)
{
    int num, den, mod;

    //calling functions which will return integer values after having checked them, rather than getting them first and then calling a function to check them
    num = get_int();
    den = get_int();

    //conditional structure to terminate program if denominator is zero (impossible division)
    if (den == 0)
    {
        printf("Error: Cannot divide by zero.");

        return 0;
    }

    mod = num % den;
    printf("remainder = %d", mod);

    return 0;
}

int get_int(void)
{
    int input;
    char c;

    //loops until input starts with at least one digit, will take all digits following uninterrupted by characters and truncate those characters
    //while loop does not work unless not equal to 1, which in this case seems to stand for the boolean true (loop so long as the input is of data type int)
    while (scanf("%d", &input) != 1)
    {
        //loops until ENTER key is pressed (next line) and then prints every single character to the screen with the error message
        //getchar() is asking the user for an input, one character at a time, but is triggered by a character, hence why leading digits are properly treated
        //and digits following a character are also treated as characters
        while ((c = getchar()) != '\n')
        {
            //prints a single character
            putchar(c);
            printf(" is not a digit or follows a character.\n");
        }
    }
    return input;
}
