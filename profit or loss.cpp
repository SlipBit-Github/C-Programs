//c program to enter selling price and cost price then print if they are in loss or profit 

#include<stdio.h>
int main()
{
    int cp, sp;

    printf("Enter the cost price :- ");
    scanf("%d",&cp);

    printf("Enter the selling price :- ");
    scanf("%d",&sp);

    if (sp>cp)
    {
        printf("You made a profit of %d rupees",sp-cp);
    }
    else
    {
        printf("You made a loss of %d rupees",cp-sp);
    }

    return 0;
}