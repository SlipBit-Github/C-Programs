// #include<stdio.h>

// void loop()
// {
//     printf("This is function that calls for itself.\n");
//     loop();
// }

// int main()
// {
//     printf("You are in a loop now. SUFFER!!!\n");
//     loop();
//     return 0;
// }



#include <stdio.h>

void loop(int n) {
    if (n > 0) {
        printf("This is function that calls for itself. Iteration %d\n", n);
        loop(n - 1);
    }
}

int main() {
    int iterations = 5; // You can set the number of iterations you want

    printf("You are in a loop now.\n");
    loop(iterations);

    return 0;
}