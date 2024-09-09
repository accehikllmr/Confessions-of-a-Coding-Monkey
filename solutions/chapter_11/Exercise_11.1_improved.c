#include <stdio.h>

int main(void)
{
    int i, j, num, rows, count, tabs;

    printf("How many rows in Pascal's Triangle? ");
    scanf("%d", &rows);

    count = 0;
    num = 1;

    while (rows != 0)
    {
        tabs = rows;

        while (tabs != 0)
        {
            printf("\t");
            tabs--;
        }

        printf("%d", num);

        for (i = 0, j = 0; i < count - j; i++, j++)
        {
            printf("\t\t");

            if (i == 0)
            {
                printf("%d", num * count);
            }

            else if (i == 1)
            {
                printf("%d", num + (num * num));
            }

        }

        //for (i = 0; i < count - 1; i++)
        //{
        //    printf("\t\t");
        //    printf("%d", num);
        //    break;
        //}

        //for (i = 0; i < count - 2; i++)
        //{
        //    printf("\t\t");
        //    printf("%d", num);
        //    break;
        //}

        printf("\n");
        rows--;
        count++;
    }

    return 0;
}

//                                                  1                                       1
//                                              1       1                                   num * count
//                                         1        2       1
//                                     1        3       3       1
//                                  1       4       6       4       1
//                             1       5       10      10      5       1
//                       1       6       15        20      15      6       1
//                  1       7         21      35      35      21      7       1
