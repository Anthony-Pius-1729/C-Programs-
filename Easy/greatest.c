#include <stdio.h>
/*
Task

Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

Note

There is not built in max function in C. 
Code that will be reused is often put in a separate function, e.g. int max(x, y) 
that returns the greater of the two values.
*/
int max_of_four(int a,int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int b, int c, int d){
    int arr[4];
    int i;
    int max = 0;
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    
    for(i=0; i<4; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}