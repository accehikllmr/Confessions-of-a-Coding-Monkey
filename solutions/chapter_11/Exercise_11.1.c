#include <stdio.h>

//it works, but it is ridiculously long and can certainly be improved, even without using functions

int main(void)
{
    int tabs, rows, swor, mid_tab, col0, num0, num1, num2, num3, num4, num5, num6, num7, num8, num9, maxrows;

    printf("How many rows in Pascal's Triangle? ");
    scanf("%d", &maxrows);

    rows = maxrows;
    swor = 2;
    col0 = 1;

    while (rows != 0)
    {
        mid_tab = 2;

        for (tabs = 1; tabs <= rows; tabs++)
        {
            printf("\t");
        }

        if (rows == maxrows)
        {
            printf("%d\n", col0);
            rows--;
            continue;
        }
        else
        {
            printf("%d", col0);
        }

        if (rows == maxrows - 2)
        {
            while (mid_tab != 0)
            {
                printf("\t");
                mid_tab = mid_tab - 1;
            }
            num0 = col0 + col0;
            printf("%d", num0);
        }

        mid_tab = 2;

        if (rows == maxrows - 3)
        {
            while (mid_tab != 0)
            {
                printf("\t");
                mid_tab = mid_tab - 1;
            }
            num1 = col0 + num0;
            num2 = num0 + col0;
            printf("%d\t\t%d", num1, num2);
        }

        mid_tab = 2;

        if (rows == maxrows - 4)
        {
            while (mid_tab != 0)
            {
                printf("\t");
                mid_tab = mid_tab - 1;
            }
            num3 = col0 + num1;
            num4 = num1 + num2;
            num5 = num2 + col0;
            printf("%d\t\t%d\t\t%d", num3, num4, num5);
        }

        mid_tab = 2;

        if (rows == maxrows - 5)
        {
            while (mid_tab != 0)
            {
                printf("\t");
                mid_tab = mid_tab - 1;
            }
            num6 = col0 + num3;
            num7 = num3 + num4;
            num8 = num4 + num5;
            num9 = num5 + col0;
            printf("%d\t\t%d\t\t%d\t\t%d", num6, num7, num8, num9);
        }

        mid_tab = 2;

        while (mid_tab != 0)
        {
            printf("\t");
            mid_tab = mid_tab - 1;
        }

        printf("%d\n", col0);

        rows--;
    }

    return 0;
}

//6                      1
//5                  1       1
//4              1       2       1
//3          1       3       3       1
//2      1       4       6       4       1
//1  1       5       10      10      5       1
