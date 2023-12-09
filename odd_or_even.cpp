//find if the number enter by the user is odd then ctr 3  or even mechatronics 3 
#include<stdio.h>
int main()
{
    int num,count=0;

    printf("Enter any number :- ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Even!\n");

        while (count<3)
        {
            printf("CTR.\n");
            count++;
        }
    }
    else
    {
        printf("Odd!\n");

        while (count<3)
        {
            printf("Mechatronics.\n");
            count++;
        }
    }

    return 0;
}