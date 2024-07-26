#include <stdio.h>

int main() {
    const float density = 1000;
    const float gravity = 9.81;
    float efficiency;
    float waterFlow;
    float waterHead;
    float P;

    printf("Efficiency: ");
    scanf("%f", &efficiency);    //DO NOT use next line escape character after format specifier, not necessary and will ask for second input before continuing
    printf("Water Flow: ");
    scanf("%f", &waterFlow);
    printf("Water Head: ");
    scanf("%f", &waterHead);

    P = efficiency * density * gravity * waterHead * waterFlow;
    printf("The power generated is %.0f kilowatts.", P);            //use .0f to return a value without decimal figures

    return 0;
}
