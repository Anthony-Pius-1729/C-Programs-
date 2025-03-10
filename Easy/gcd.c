#include <stdio.h>   
#include <stdlib.h>  

int main() {
    int m, n;

    // Prompt user for input
    printf("Enter two positive numbers: \n");
    scanf("%d %d", &m, &n);

    // Input validation: ensure numbers are positive
    if (m <= 0 || n <= 0) {
        printf("Please enter two positive numbers.\n");
        return EXIT_FAILURE; // Exit with failure status
    }

    // Euclidean algorithm
    while (n != 0) {
        int r = m % n; // Calculate remainder
        m = n;         // Update m
        n = r;         // Update n
    }

    // Print the result
    printf("The GCD is %d\n", m);

    return EXIT_SUCCESS; 
}