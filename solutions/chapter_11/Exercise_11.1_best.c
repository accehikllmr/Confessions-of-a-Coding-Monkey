#include <stdio.h>

int main(void)
{
    //all integers because numbers in triangle are never decimals
    int i, n, k, rows, tabs, num, den1, den2, pascal;

    //allowing user to define size of triangle, so not limited to 6 rows
    printf("How many rows in Pascal's Triangle? ");
    scanf("%d", &rows);

    //since first position is 0 choose 0 (n choose k)
    n = 0;

    //want loop to run a final time when n is equal to number of rows
    do
    {
        //since first position is 0 choose 0 (n choose k)
        k = 0;

        //numbers of rows and columns in triangle are equal, so loop until k (column) equals n (row)
        while (k <= n)
        {
            tabs = rows - n;    //tabs needed before first number in row, gets smaller as triangle increases in size
            num = n;            //variable to store numerator factorial in n choose k formula, starts at value for row
            den1 = k;           //variable to store first denominator factorial in n choose k formula, starts at value for column
            den2 = n - k;       //variable to store second denominator factorial in n choose k formula

            //condition to skip factorial calculations for first column, where 0! yields 0 (incorrect value) and ZeroDivisionError
            if (k == 0)
            {
                //adding tabs before first column of triangle according to given row
                while (tabs != 0)
                {
                    printf("\t");
                    tabs--;
                }

                //printing string, since previous row not used for next row calculations
                printf("1");
                k++;
                continue;
            }

            //condition to skip factorial calculations for last column, where 0! yields 0 (incorrect value) and ZeroDivisionError
            else if ((n - k) == 0 && k != 0)
            {
                printf("\t\t1");
                break;
            }

            //calculates numerator (n!) of n choose k function
            for (i = 1; i < n; i++)
            {
                num = num * (n - i);    //i starts at 1 to subtract from n and increases until (n - i) equals 1, since zero would cancel product
                                        //num starts as n and is multiplied each loop by (n - i)
            }

            //calculates first denominator (k!) of n choose k function
            for (i = 1; i < k; i++)
            {
                den1 = den1 * (k - i);  //see comments in previous loop
            }

            //calculates second denominator ((n - k)!)  of n choose k function
            for (i = 1; i < (n - k); i++)
            {
                den2 = den2 * (n - k - i);  //see comments in previous loop
            }

            //calculating number for given position (row n, column k) in triangle
            pascal = num / (den1 * den2);
            printf("\t\t%d", pascal);
            k++;
        }

        printf("\n");   //new line after reaching last column
        n++;

    } while (n != rows);

    return 0;
}
