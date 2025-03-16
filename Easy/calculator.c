#include <stdio.h>
#include <stdio.h>


int main () {

    int num;
    char operator;
    char addition = '+';
    char subtraction = '-';
    char multiplication = '*';
    char division = '/';
    char power ='^';
    char exit = '!';
    double num1;
    double num2;
    printf("How many operations do you want to have? \n"); 
    scanf("%d", &num);

    

   for(int i = 0; i < num; i++){
    printf("What operation do you want to have?\n");
    scanf(" %c", &operator);

        if ( (operator != addition) && (operator != subtraction) && (operator != division) && (operator != power) && (operator != multiplication) ) {
    printf("Enter a valid operation \n");
    break;
}
    printf("Enter two operands\n");
    scanf("%lf %lf", &num1, &num2);


    if (operator == exit){
        printf("Exiting the program \n");
        break;
    }

    if ((operator == addition) ){

        int sum = num1 + num2;
        printf("Sum is %d \n", sum);
    
    }
    if (operator == subtraction){
        int diff = num1 - num2;
        printf("Difference is %d \n", diff);
        
    }
    if (operator == multiplication) {
        int product = num1 * num2;
        printf("Product is %d \n", product);
       
    }
    if (operator == division) {
        float quotient = (float) num1/num2;
        printf("Quotient is %f \n", quotient);
        
    }
    if (operator == power){
        int pow=1;
        for(int i = 0; i < num2; i++){
            pow = pow * num1;
        };

        printf("Power is %d \n", pow);
    }
   }
    return 0;
}