//total marks and %age in 5 subjects

#include<stdio.h>
main(){
	float maths , eng , cp , autocad , malayalam , total , percentage;
	
	printf("Enter your marks for Maths :- ");
	scanf("%f",&maths);
	
	printf("Enter your marks for English :- ");
	scanf("%f",&eng);
	
	printf("Enter your marks for Computer Programming :- ");
	scanf("%f",&cp);
	
	printf("Enter your marks for AutoCAD :- ");
	scanf("%f",&autocad);
	
	printf("Enter your marks for Malayalam :- ");
	scanf("%f",&malayalam);
	
	total = maths+eng+cp+autocad+malayalam;
	printf("Your total marks are %0.2f",total);
	
	percentage = (total/500)*100;
	printf("\nYour percentage is %0.2f%%",percentage);
	
}
