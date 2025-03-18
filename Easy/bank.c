#include <stdio.h>
#include <stdlib.h>


int main (){
	
	printf("Welcome to BEEbank!1 Check Balance \n 2 Deposit Money \n 3 Withdraw Money\n 4 Exit \n");
signed int balance = 500;
int option;
scanf("%d \n",&option);


switch (option){
	int x;
	case 1:
		printf("Account balance: %dtl \n", balance); 
	case 2:
		
		printf("Enter deposit amount: \n");
		scanf("%d", &x);
		printf("Deposited %d \n", x);
		printf("New balance after deposit is %d \n", balance + x);
}

if (option == 3){
	printf("Enter amount too withdraw");
	int withdrawal;
	scanf("%d", &withdrawal);
	if(balance > withdrawal){
		printf("Insuffient Funds");
		return 0;
	}
	else {
	printf("New balance is %d", balance - withdrawal);
	}
}
	return 0;
}