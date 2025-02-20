#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &n);

    // Ensure the number is within the specified range
    if (n < 10000 || n > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1;
    }

    // Extract and sum each digit
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    }

    // Output the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0;
}