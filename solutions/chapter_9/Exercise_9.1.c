#include <stdio.h>

int main(void)
{
    //using float type, answers are not exact unities (.000...), but double type avoids this problem for inputs <= 1000000 and perhaps beyond
    float iterDenom, sum = 0.0;
    int i;

    printf("Number of iterations (value of denominator)? ");
    scanf("%f", &iterDenom);

    for (i = 1; i <= iterDenom; i = i + 1)
    {
        //each iteration, the added value is divided by the original inputted denominator
        sum = sum + (1.0 / iterDenom);
    }

    printf("The final sum is: %f\n", sum);

    return 0;
}
