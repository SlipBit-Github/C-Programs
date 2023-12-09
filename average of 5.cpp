//average of 5 numbers
#include<stdio.h>
main(){
	//list all variables
	int num1,num2,num3,num4,num5,average;
	
	//ask for values and store them
	printf("Enter your first number:- ");
	scanf("%d",&num1);
	
	printf("Enter your second number:- ");
	scanf("%d",&num2);
	
	printf("Enter your third number:- ");
	scanf("%d",&num3);
	
	printf("Enter your fourth number:- ");
	scanf("%d",&num4);
	
	printf("Enter your fifth number:- ");
	scanf("%d",&num5);
	
	//calcutate the average
	average = (num1*num2*num3*num4*num5)/5;
	printf("%d",average);
	return 0;
}
