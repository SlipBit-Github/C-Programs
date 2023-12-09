#include<stdio.h>
int main()
{
    int num,a=1;

    printf("Enter the number :- ");
    scanf("%d",&num);

    while(a<=10)
    {

        printf("%d * %d = %d\n",num,a,num*a);
        a++;

    }
    return 0;
}