//need to separate lines into paragraphs (paragraphing)
#include <stdio.h> //paragraph for importing libraries
#include <math.h>

//paragraph for function declaration and body
//K&R style for placement of braces (curly brackets)
int main(void) { //white space prior to curly bracket
                 //best practice to use int main(void) when we want main to be called without arguments
                 //not writing void allows main to be called with arguments

    //paragraph for variable declaration
    double sMajAxis, sMinAxis, ec; //white space before variable after comma
                                   //give variables meaningful names

    //paragraphs for taking user inputs
    printf("Semi-major axis :"); //white space after colon
    scanf("%lf", &sMajAxis);

    printf("Semi-minor axis :");
    scanf("%lf", &sMinAxis);

    //paragraph for conditional statement
    //K&R style for placement of braces (curly brackets)
    if (sMajAxis >= sMinAxis) {
        ec = sqrt(sMajAxis * sMajAxis - sMinAxis * sMinAxis) / sMajAxis; //white spaces between variables and operators, parentheses and curly brackets
        printf("E = %.5lf", ec);                                         //and if and parenthesis

    }
  
    //paragraph for return statement
    return 0;
}
