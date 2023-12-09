//c program to compare two numbers by SLipBit.

#include<stdio.h>
main()
{
    int num1 , num2 ;

    printf("Enter your First number :- ");
    scanf("%d",&num1);

    printf("Enter your Second number :- ");
    scanf("%d",&num2);

    if (num1 > num2) 
    {
        printf("%d is the greator number between the two.",num1);
    }
    else
    {
        printf("%d is the greator number between the two.",num2);
    }
}
