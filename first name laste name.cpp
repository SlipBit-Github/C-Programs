//enter first name / last name from user then combine them and copy it to
//full name then count no of characters.

#include<stdio.h>
#include<string.h>

int main()
{
    char first_name[20], last_name[20], full_name[40], space[]=" ";
    int length;

    printf("Enter Your First Name :- ");
    gets(first_name);

    printf("Enter Your Last Name :- ");
    gets(last_name);

    strcat(space,last_name);

    strcat(first_name,space);

    strcpy(full_name,first_name);

    length = strlen(full_name);
    length--;

    printf("Your full name is :- ");
    puts(full_name);

    printf("Total number of characters are :- %d",length);

    return 0;
}