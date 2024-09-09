#include <stdio.h>

//finds Armstrong numbers up to 1000
int main(void)
{
    int a, b, c, hun, ten, num1, num2;

    //loop for hundreds, start at 1 since 0 would make a two digit number, end before 10 otherwise going into thousands
    for (a = 1; a < 10; a++)
    {
        //loop for tens, start at zero for smallest three digit number
        for (b = 0; b < 10; b++)
        {
            //loop for units
            for (c = 0; c < 10; c++)
            {
                //turn digits for positions into actual value, excluding units because c is already in units
                hun = a * 100;
                ten = b * 10;

                //two approaches to reach same number, adding hundreds, tens and units, or finding the sum of all cubes
                num1 = hun + ten + c;
                num2 = (a * a * a) + (b * b * b) + (c * c * c);

                //condition for identifying an Armstrong number
                if (num1 == num2)
                {
                    printf("%d is an Armstrong number.\n", num1);
                }
            }
        }
    }

    return 0;
}
