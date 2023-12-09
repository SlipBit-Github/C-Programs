//learning functions
// #include<stdio.h>

// //declaration or prototype.
// void printHello();

// int main()
// {
//     printHello(); //function call.
//     return 0;
// }

// //function definition.
// void printHello()
// {
//     printf("Hello :D");
// }




//make a program that prints Namaste if user is indian and Bonjour if user is French.
#include<stdio.h>

void printNamaste();
void printBonjour();

int main()
{
    int num;
    printf("Enter 1 if indian and 2 if french.\n");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        {
            printNamaste();
            break;
        }
        case 2:
        {
            printBonjour();
            break;
        }
        default:
        {
            printf("Enter a valid option.");
            break;
        }
    }

    return 0;
}

void printNamaste()
{
    printf("Namaste!\n");
}

void printBonjour()
{
    printf("Bonjour!\n");
}