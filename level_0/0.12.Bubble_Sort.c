#include <stdio.h>
#define SIZE 10

int main(void){

    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    printf("Original Order:\n");
    for (size_t i = 0; i < SIZE; ++i){
        printf("%-4d", a[i]);
    }

    /* Bubble Sort */
    for (int pass = 1; pass < SIZE; ++pass){
        for (size_t i = 0; i < SIZE - 1; ++i){
            if ( a[i] > a[i+1]){
                int tmp = a[i];
                a[i] = a[i+1];
                a[i+1] = tmp;
            }
        }
    }

    printf("\nAscending Order:\n");
    for (size_t i = 0; i < SIZE; ++i){
        printf("%-4d", a[i]);
    }

    return 0;
}
