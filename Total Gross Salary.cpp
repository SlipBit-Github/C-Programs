//c program to calculate TGS by Abhinav Nair

#include<stdio.h>

main(){
	
	int BS, TGS;
	float HAR, DA;
	//where BS is base salary, HAR is House Rent Amount, DA is Dearness Allowance and TGS is Total Gross Salary
	printf("Enter the base salary :- ");
	scanf("%d",&BS);
	
	//calculating HAR
	HAR = BS*0.1 ;
	printf("\n%f is HAR ",HAR);
	
	//claculating DA
 	DA = BS*0.2 ;
 	printf("\n%f is DA ",DA);
 	
 	//Calculate and print TGS
 	TGS = BS + HAR + DA ;
 	printf("\nYour Total Gross Salary is :- %d",TGS) ;
 	
}
