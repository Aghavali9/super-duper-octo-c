#include <stdio.h>
#define SIZE 5

int main() {
    int data[SIZE] = {4, 6, 2, 20, 9};

    printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7zu%13d%8s", i, data[i], "");
        for (int j = 1; j <= data[i]; ++j) {
            printf("%c", '*');
        }
        puts(""); // end a bar with a newline
    }

    return 0;
}
