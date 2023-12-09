#include <stdio.h>
#include <stdlib.h>

int main() {
    // Specify the command to launch an external program
    const char *command = "notepad.exe";  // Example: Launch Notepad on Windows

    // Use the system function to execute the command
    int result = system(command);

    // Check the result of the system call
    if (result == 0) {
        printf("Program launched successfully.\n");
    } else {
        printf("Failed to launch the program.\n");
    }

    return 0;
}
