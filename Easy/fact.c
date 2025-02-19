#include <stdio.h>


double factorial (int n){
    double fact = 1;
    
    for(int i = 1; i <=n; i ++){
        fact *=i;
    }
   
    return fact;
}
int main() {
    
    int num;
    double ans;
    
    printf("Enter numbers\n");
    scanf("%d", &num);
    double factorial_val = factorial(num);

    ans = (double) num/factorial_val;
    printf("%f",ans);
    return 0;
}