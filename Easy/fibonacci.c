#include <stdio.h>
#include <stdlib.h>

int fibonacci (int x);

int main ()  {
	printf("Enter a number to find it's fiboncci count: \n");
	int i;
	scanf("%d", &i);
	if (i <= 0 ){
		return 0;
	}
	else {
	printf("The count is %d ", fibonacci(i));	
	}
	
	
};

int fibonacci (int x){
		
	if (x <= 0 ){
		return 1;
	}	
	else {
		return fibonacci(x-1) + fibonacci(x-2);
	}
	
}