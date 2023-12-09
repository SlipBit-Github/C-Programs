//volume of box 
#include<stdio.h>
main(){
	int volume, length , width , height;
	
	printf("Enter the length :- ");
	scanf("%d",&length);
	
	printf("Enter the width :- ");
	scanf("%d",&width);
	
	printf("Enter the height :- ");
	scanf("%d",&height);
	
	volume = length*width*height;
	printf("Volume of box is %d",volume);
	
}
