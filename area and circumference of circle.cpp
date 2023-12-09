//c program for area and circumference
#include<stdio.h>
main(){
	//list all the variables
	int radius;
	float area,circumference;
	
	//ask for radius and save it
	printf("Enter the radius of the circle :- ");
	scanf("%d",&radius);
	
	//calculate the area and circumference of the circle
	area = 3.14*radius*radius;
	circumference = 2*3.14*radius;
	
	//print the result
	printf("area is %f",area);
	printf("\n circumference is %f",circumference);
	
}
