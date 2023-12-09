//c program to find if a number is positive or negetive by SlipBit

#include<stdio.h>
main()
{
    int num;

    printf("Enter Your Number :- ");
    scanf("%d",&num);

    if(num<0) 
    {
        printf("This number is negative.");
    }
    else 
    {
        printf("This number is positive");
    }
}