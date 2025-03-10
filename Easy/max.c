#include <stdio.h>
#include <stdlib.h>

int main () {

    double numb;
    double largest = 0.0;

    while (1) {
        printf("Enter number: \n");
        scanf("%lf", &numb);
       if ( numb <= 0){
        break;
       }

       if (numb > largest ){
        largest = numb;
       }

    }

    if (largest > 0){
        printf("The largest number is :%lf", largest);
    }

    return EXIT_SUCCESS;
}