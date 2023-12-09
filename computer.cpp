//c program for to check password

//wow this started as a password checker and now we have a computer!?

#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char real_pass[]="SlipBit"; char user_pass[50];
	int a=0;
	
	do //my password checking code was a somewhat broken , thanks anmol you helped me fix it.
	{
		printf("Enter Your Password :- ");
		gets(user_pass);

		a++;

		if (a==5)
		{
			printf("You entered wrong password 5 times, try again later.");
			break;
		}

		if (strcmp(real_pass,user_pass)==0)
		{
			a=5;

			printf("\nWelcome SlipBit :D");
			printf("\nWhat do you want to do today?");

			int input;

			printf("\n1 is Chrome \n2 is GTA 5 \n3 is Visual Studio Code\n4 is Calculator\n");
			scanf("%d",&input);

			if (input==1) 
			{
			const char *command = "\"C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe\""; 

    		int result = system(command);

    		if (result == 0) 
			{
        		printf("Program launched successfully.\n");
    		} 	
			else 
			{
        		printf("Failed to launch the program.\n");
   			}
			break;
			}


			if (input==2) 
			{
			const char *command = "gtav.exe"; 

    		int result = system(command);

    		if (result == 0) 
			{
        		printf("Program launched successfully.\n");
    		} 	
			else 
			{
        		printf("Failed to launch the program.\n");
   			}
			break;
			}


			if (input==3) 
			{
			const char *command = "\"C:\\Users\\abhin\\AppData\\Local\\Programs\\Microsoft VS Code\\code.exe\"";

    		int result = system(command);

    		if (result == 0) 
			{
        		printf("Program launched successfully.\n");
    		} 	
			else 
			{
        		printf("Failed to launch the program.\n");
   			}
			break;
			}


			if (input==4) 
			{
			const char *command = "calc.exe";  //open calculator

    		// Use the system function to execute the command
    		int result = system(command);

    		// Check the result of the system call
    		if (result == 0) 
			{
        		printf("Program launched successfully.\n");
    		} 	
			else 
			{
        		printf("Failed to launch the program.\n");
   			}
			break;
			}
		}

	}
	while (1);
	
	return 0;
}
  