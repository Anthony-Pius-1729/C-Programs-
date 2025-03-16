#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPSILON 1e-10

int main () {


    double initial_guess = 1.0;
    double number;

    printf("Enter a number : \n");
    scanf("%lf", &number);

    while(abs(initial_guess*initial_guess - number) >= EPSILON) {
        initial_guess = (initial_guess + (number/initial_guess))/2;
    }
    printf("%lf", initial_guess);

    return 0;
}