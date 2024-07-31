#include <stdio.h>
#include <math.h>

//recommended indentation is four spaces (or one tab)
//indentation allows the reader to more easily discern to which control structure lines of code belong
//READABILITY is of utmost importance for the user, though style can vary, it must at the very least be CONSISTENT
//indentation is not recognized by the compiler, it relies on the braces to determine the program structure

int main(void) {

    //variable names should be clear enough that there is no need for comments to reveal their meaning
    //but they should not be too long, using context specific suffixes can help reduce their length (ex : Num for numerator)
    //they should begin with lowercase letters and have specific letters if relevant, and they should avoid negatives and C keywords
    //("temp" for temporary, single letter prefix for loops, "n" prefix for number of, etc.)
    //UPPERCASE letters should be used sparingly, for constants is ok

    //variables declared all together because all of the same data type
    float a, b, c, firstNum, secondNum, denominator, firstRoot, secondRoot, discriminant;

    /*as a general rule, comments should not explain what is being done
    but rather why it is being done, they should not simply paraphrase
    the code in question, and they should never be within a line of code*/

    //blank spaces have been...
    //... added after commas between function arguments (line 36)
    //... added between expressions in control structure (line 60)
    //... not added at the beginning and ending of parentheses (line 35)
    //... not added between a function name and the parenthesis (line 36)
    //... not added inside array brackets (no example here)
    //... added between a control flow structure and the parenthesis (line 51)
    //... added before and after relational operators (line 51)
    //... between variables and operators (line 44)

    //getting user input for values in quadratic equation, but not at once since unsure how to do it on a single line, if possible
    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);

    //indentation for the same nesting depth should be aligned (see lines 28 + 47, and lines 37 + 42)
    //otherwise, the program will soon find itself off of the page

    //placement of braces is the K&R style (one among several others)

    if (discriminant >= 0) {

        firstNum = -b + sqrt(discriminant);
        secondNum = -b - sqrt(discriminant);
        denominator = 2 * a;

        firstRoot = firstNum / denominator;
        secondRoot = secondN / denominator;

        if (firstRoot != secondRoot) {

            printf("First real root = %.2f\n", firstRoot);
            printf("Second real root = %.2f\n", secondRoot);

        } else {

            printf("The only real root = %.2f\n", firstRoot);
        }

    } else {

        printf("There are no real roots.\n");
    }

    return 0;
}
