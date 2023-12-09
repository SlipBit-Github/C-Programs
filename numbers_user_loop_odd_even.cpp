//write a program to enter 10 numbers by user and display total odd/even number.

#include<stdio.h>
int main()
{
    int count=0,number[10];

    while (count<=9)
    {
        printf("Enter %d number :- ",count+1);
        scanf("%d",&number[count]);
        count++;
    }

    int odd=0,even=0;
    count=0;

    while(count<=9)
    {
        if(number[count]%2==0)
        {
            
            even++;
        }
        else
        {
            printf("%d\n",number[count]); //testing
            odd++;
        }
        count++;
    }

    printf("Total number of odd numbers are :- %d\n",odd);
    printf("Total number of even number are :- %d\n",even);
    
    return 0;
}