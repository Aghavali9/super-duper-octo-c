#include <stdio.h>
int user_input();


int main() {
    int num = user_input();

    for (int p = 1; p < num; p = 2*p);
    printf("%d in pure binary is:\t", num);
    while (p>0) {
        if (p <= num) {
            printf("1");
            num = num - p;
        }
        else printf("0");
        p = p/2;
    }
    printf("\n");

    return 0;
}


int user_input(){
    /* checking for a valid user integer input */
    int num;
    char c;
    do {
        printf("Please enter a positive integer:\n>>>");
        while (scanf("%d%c", &num, &c) != 2 || c != '\n' || num <= 0) {
            printf("Invalid input. Please enter a positive integer: \n>>> ");
            scanf("%*[^\n]");  // clear the input buffer
        }
    } while (num <= 0);
    return num;
}
