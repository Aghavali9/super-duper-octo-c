#include <stdio.h>

int main() {
    int num;
    char c;
    // checking for a valid user integer input
    do {
        printf("Please enter a positive integer:\n>>>");
        while (scanf("%d%c", &num, &c) != 2 || c != '\n' || num <= 0) {
            printf("Invalid input. Please enter a positive integer: \n>>> ");
            scanf("%*[^\n]");  // clear the input buffer
        }
    } while (num <= 0);
    printf("You entered: %d\n", num);
    return 0;
}
