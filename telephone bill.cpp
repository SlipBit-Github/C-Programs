#include<stdio.h>
int main()
{
    int mins;

    printf("Enter the number of mins :- ");
    scanf("%d",&mins);

    if(mins<=200)
    {
        printf("Your total bill is :- 0 Rupees");
    }

    else if(mins>200 && mins<500)
    {
        printf("Your total bill is :- %d",mins*1-200);
    }

    else if(mins>500)
    {
        printf("Your total bill is :- %d",mins*2-200);
    }

    else
    {
        printf("Error 404 :- Please contact our customer care for more info.");
    }
    return 0;
}