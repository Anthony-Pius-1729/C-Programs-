#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("Enter a fraction a/b [a < b]: \n");
    int numerator;
    int denominator;
    scanf("%d / %d", &numerator, &denominator);
    int originalNum = numerator;
    int originalDenom = denominator;

    while (denominator != 0) {
        int remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;
    }

    printf("GCD %d\n", numerator);

    int newNum = originalNum/numerator;
    int newDenom = originalDenom/numerator;

    printf("Lowest form of fraction is: %d/%d", newNum, newDenom);


    return EXIT_SUCCESS;
}