//c program to find square and cube of a number 
#include<stdio.h>

main(){
	
	//list all variables
	int num1,square,cube;
	
	//ask user for a number
	printf("Enter your number:- ");
	scanf("%d",&num1);
	
	//calculate the square are cube of this number and print it
	square = num1*num1;
	cube = num1*num1*num1;
	printf("Square for the number %d is %d",num1,square);
	printf("\nCube for the number %d is %d",num1,cube);
	return 0;
}
