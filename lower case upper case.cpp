#include<stdio.h>
#include<string.h>

int main()
{
    char name[40];

    printf("Enter your name in upper case :- ");
    gets(name);

    strlwr(name);
    printf("\nIn Lower Case :- %s",name);

    printf("\nEnter your name in lower case :- ");
    gets(name);

    strupr(name);
    printf("\nIn Upper Case :- %s",name);

    return 0;
}