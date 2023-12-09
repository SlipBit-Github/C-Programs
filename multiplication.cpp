//c program for multiplication of 3 numbers.

#include<stdio.h>

main(){
	
	//list all variables.
	int num1,num2,num3,product;
	
	//ask for first number are store it.
	printf("Enter your first number:- ");
	scanf("%d",&num1);
	
	//ask for second number are store it.
	printf("Enter your second number:- ");
	scanf("%d",&num2);
	
	//ask for third number are store it.
	printf("Enter your third number:- ");
	scanf("%d",&num3);
	
	//multiplay all the numbers are print the result.
	product = num1*num2*num3;
	printf("Product of %d,%d and %d is %d",num1,num2,num3,product);
	
	return 0;
}
