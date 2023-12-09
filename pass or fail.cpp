//pass or fail program by SlipBit

#include<stdio.h>
main()
{
	int maths , eng , cp , autocad , malayalam , total ;
	
	printf("Enter your marks for Maths :- ");
	scanf("%d",&maths);
	
	printf("Enter your marks for English :- ");
	scanf("%d",&eng);
	
	printf("Enter your marks for Computer Programming :- ");
	scanf("%d",&cp);
	
	printf("Enter your marks for AutoCAD :- ");
	scanf("%d",&autocad);
	
	printf("Enter your marks for Malayalam :- ");
	scanf("%d",&malayalam);
	
	total = maths + eng + cp + autocad + malayalam ;
	printf("Your total marks are %d",total);

	printf("\nYour percentage is :- %d%%",total/5);
	
    if ( total <= 200)
    {
        printf("\nYou have failed in your exams :( ");
    }
    else 
    {
        printf("\nYou have passed :) ");
    }
}
