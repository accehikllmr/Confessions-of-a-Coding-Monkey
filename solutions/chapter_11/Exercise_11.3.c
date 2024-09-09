#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, base, a, b, square, max_base, max_n, max_i;
    double max_exp, n;

    //getting input for limit of check for Kaprekar numbers
    printf("What is the upper bound to check for base 10 Kaprekar numbers? ");
    scanf("%d", &max_i);

    //Base 10 because the algorithm does not seem to work with other bases
    printf("\nBase 10 Kaprekar numbers between 1 and %d:\n", max_i);

    base = 10;

    //maximum value for the exponent n in this equation, found by isolating using logarithms - i ** 2 = a * base ** n + b
    max_n = ((2 * log(pow(max_i, 2))) / log(base));

    //loop from 1 to given upper limit
    for (i = 1; i <= max_i; i++)
    {
        square = i * i;

        //start at 1 to prevent ZeroDivisionError in upcoming calculation, less than i since b cannot equal zero
        for (a = 1; a < i; a++)
        {
            //since a + b = i, can set value of b according to a instead of iterating through values which cannot work (when a++, b--)
            b = i - a;

            //start at zero since nonnegative integer, but no problem for upcoming calculations
            for (n = 0; n <= max_n; n++)
            {
                //three conditions for being a Kaprekar number, and all must be true at once
                if ((a + b == i) && (square == a * pow(base, n) + b) && (b != 0))
                {
                    printf("%d\n", i);
                    break;                  //to quit loop once Kaprekar number is found, to avoid using resources
                }
            }

            if ((a + b == i) && (square == a * pow(base, n) + b) && (b != 0))
            {
                break;                      //to quit this loop and begin leftmost loop with new value for i, all to avoid using resources
            }
        }
    }

    return 0;
}
