#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
In this challenge, create an array of size n dynamically, and read the values from stdin.
 Iterate the array calculating the sum of all elements. 
 Print the sum and free the memory where the array is stored.

While it is true that you can sum the elements as they are read, without first storing them to an array, 
but you will not get the experience working with an array. Efficiency will be required later.
*/

int main() {

   
    int n, j;
    int sum = 0;
    scanf("%d", &n);   
    
    int* arr = (int *)malloc(n * sizeof(int));
    
    for(int i=0; i<n;i++){
        scanf("%d",&j);
        arr[i] = j;
    }
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    printf("%d", sum);
    free(arr);
    return 0;
}