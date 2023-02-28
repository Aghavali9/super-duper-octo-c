#define NDATA 10
#include <stdio.h>

void read_vector(int data[], int n);
void print_vector(int data[], int n);


int main() {
    int data[NDATA];
    read_vector(data, NDATA);
    print_vector(data, NDATA);
    return 0;
}


void read_vector(int data[], int n){
    int i;
    printf("Please enter %d integers:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }
}

void print_vector(int data[], int n){
    int i;
    printf("The values are:\n");
    for (i=0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");
}
