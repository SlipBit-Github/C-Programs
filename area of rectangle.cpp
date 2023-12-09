//c program to find the area of rectangle
#include<stdio.h>
main(){
	
	//list all variables.
	int length,width,area;
	
	//ask for length of rectangle and store the value.
	printf("Enter the length of rectangle:- ");
	scanf("%d",&length);
	
	//ask for width of rectangle and store the value.
	printf("Enter the width of rectangle:- ");
	scanf("%d",&width);
	
	//calculate the area and display the output.
	area = length*width;
	printf("area of rectangle is %d",area);
	return 0;
}
