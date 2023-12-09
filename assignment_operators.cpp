#include<stdio.h>
int main()
{
    int a;

    printf("Enter a value for A:- ");
    scanf("%d",&a);

    printf("A+=10 = %d\n",a+=10);
    printf("A-=5 = %d\n",a-=5);
    printf("A*=3 = %d\n",a*=3);
    printf("A/=5 = %d\n",a/=5);
    printf("A%%=3 = %d\n",a%=3);

    return 0;

}