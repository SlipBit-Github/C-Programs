// learn file input output

#include<stdio.h>
#include<string.h>
#include <iostream>
#include <fstream>

main()
{
    FILE *pointer;
    pointer = fopen("permanent.txt","w");

    if (!file.is_open()) 
    {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return 1; // Return an error code
    }

    std::string password;

    printf("Enter permanent password :- ");
    scanf("%s", password);




    fprintf(pointer, "%s", password);

    
    fclose(pointer);

}

// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     // Ask the user to enter a password
//     std::string password;
//     std::cout << "Enter a password: ";
//     std::cin >> password;

//     // Open the file for writing
//     std::ofstream file("password.txt");

//     // Check if the file is open
//     if (!file.is_open()) {
//         std::cerr << "Failed to open the file for writing." << std::endl;
//         return 1; // Return an error code
//     }

//     // Write the password to the file
//     file << password;

//     // Close the file
//     file.close();

//     std::cout << "Password saved in password.txt" << std::endl;

//     return 0; // Return 0 to indicate success
// }
