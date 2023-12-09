//c program to use arithmatic operators in c language. By SlipBit.

#include<stdio.h>
int main() 
{
    int a , b ;

    printf("Enter A:- ");
    scanf("%d",&a);

    printf("Enter B:- ");
    scanf("%d",&b);

    printf("A + B = %d", a + b);
    printf("\nA - B = %d", a - b);
    printf("\nA * B = %d", a * b);
    printf("\nA / B = %d", a / b);
    printf("\nA %% B = %d", a % b);

    return 0;
}