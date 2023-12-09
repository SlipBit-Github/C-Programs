//c program for finding simple interest
#include<stdio.h>
main(){
	//list all the variables
	int principal,rate,time;
	float simple_interest;
	
	//ask for principal,rate,time
	printf("Enter the principal:- ");
	scanf("%d",&principal);
	
	printf("Enter the rate:- ");
	scanf("%d",&rate);
	
	printf("Enter the time:- ");
	scanf("%d",&time);
	
	//calculate SI
	simple_interest = (principal*rate*time) / 100;
	printf("%f",simple_interest);
	return 0;
}
