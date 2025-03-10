#include <stdio.h>
#include <stdlib.h>

int main (){

    int digits = 0, n;

    printf("Enter a number\n");

    scanf("%d", &n);

    do {
        n/=10;
        digits++;
    }while (n !=0);

    printf("The number has %d digits\n", digits);

}