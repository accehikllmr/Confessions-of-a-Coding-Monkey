#include <stdio.h>
//library needed to use assert macro (what is a macro?)
#include <assert.h>

int main(void)
{
    int num, den, mod;
    scanf("%d%d", &num, &den);

    //assertion which, if failed, will abort the program thus preventing the runtime error that would follow (division by zero), and does not reach return statement
    //also writes an error message to standard output
    assert(den > 0);

    mod = num % den;
    printf("remainder = %d\n", mod);

    return 0;
}
