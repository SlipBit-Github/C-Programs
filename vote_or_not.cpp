//c program to check if a person is eligible to vote or not

#include<stdio.h>
int main()
{
    int age;

    printf("Enter your age :- ");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("You can vote.");
    }
    else
    {
        printf("You can not vote.");
    }

    return 0;
}