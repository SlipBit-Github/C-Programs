#include<stdio.h>

int add(int num1, int num2)
{
    return num1+num2;
}

int less(int num1, int num2)
{
    return num1-num2;
}

int divide(int num1, int num2)
{
   return num1/num2;
}

int modulas(int num1, int num2)
{
    return num1%num2;
}

int main()
{
    int choice,result,num1,num2;

    printf("--------------------------\n");
    printf("Welcome to the calculator.\n");
    printf("--------------------------\n");
    printf("\n");
    printf("What do you want to do today?\n");
    printf("Enter 1 for addition.\n");
    printf("Enter 2 for subtraction.\n");
    printf("Enter 3 for division.\n");
    printf("Enter 4 for modulas.\n");
    scanf("%d",&choice);

    switch (choice)
        {
            case 1:
                printf("Enter First Number :- ");
                scanf("%d",&num1);

                printf("Enter Second Number :- ");
                scanf("%d",&num2);
                result = add(num1,num2);
                printf("%d + %d = %d",num1,num2,result);
                break;

            case 2:
                printf("Enter First Number :- ");
                scanf("%d",&num1);

                printf("Enter Second Number :- ");
                scanf("%d",&num2);
                result = less(num1,num2);
                printf("%d - %d = %d",num1,num2,result);
                break;

            case 3:
                printf("Enter First Number :- ");
                scanf("%d",&num1);

                printf("Enter Second Number :- ");
                scanf("%d",&num2);
                result = divide(num1,num2);
                printf("%d / %d = %d",num1,num2,result);
                break;

            case 4:
                printf("Enter First Number :- ");
                scanf("%d",&num1);

                printf("Enter Second Number :- ");
                scanf("%d",&num2);
                result = modulas(num1,num2);
                printf("%d %% %d = %d",num1,num2,result);
                break;

            default:
                printf("Enter a valid operator.");
            break;
        }

    return 0;
}
