//c program to use logaical operators in c language. By SlipBit.

#include<stdio.h>
int main()
{
    int a , b; 

    a = 1; b = 6;

    printf("%d", (a == 5) && (b < 5) );
    printf("\n%d", a || b);
    printf("\n%d", !((a == 5) && (b < 5)) );

    return 0;
}
