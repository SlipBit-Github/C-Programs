//celsius to fahrenheit

#include<stdio.h>
main(){
	float celsius , fahrenheit;
	
	printf("Enter the temperate in Fahrenheit :- ");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit-32) * 5/9;
	
	printf("Temprature in celsius is :- %0.2f",celsius);
	
}
