#include <stdio.h>

int main()
{
    char op;
    int num1,num2;

    printf("Enter the operator :- ");
    scanf("%c",&op);

    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }

    if (op=='+')
    {
        printf("Enter the first number :- ");
        scanf("%d",&num1);

        printf("Enter the second number :- ");
        scanf("%d",&num2);

        printf("%d + %d = %d",num1,num2,num1+num2);
    }

    else if (op=='-')
    {
        printf("Enter the first number :- ");
        scanf("%d",&num1);

        printf("Enter the second number :- ");
        scanf("%d",&num2);

        printf("%d - %d = %d",num1,num2,num1-num2);
    }

    else if (op=='*')
    {
        printf("Enter the first number :- ");
        scanf("%d",&num1);

        printf("Enter the second number :- ");
        scanf("%d",&num2);

        printf("%d * %d = %d",num1,num2,num1*num2);
    }

    else if (op=='/')
    {
        printf("Enter the first number :- ");
        scanf("%d",&num1);

        printf("Enter the second number :- ");
        scanf("%d",&num2);

        printf("%d / %d = %d",num1,num2,num1/num2);
    }
    
    else 
    {
        printf("Enter a valid operator");
    }

    return 0;
}