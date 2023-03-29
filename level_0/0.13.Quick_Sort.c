/* The time complexity of this algorithm would be Θ(n log n), because this is the tightest
 * bound that can be found for the time required to execute the algorithm. In the best case
 * scenario, the input array is already sorted, and the algorithm takes linear time, while in
 * the worst-case scenario, the input array is completely reversed, and the algorithm takes
 * quadratic time. But on average, the algorithm takes n log n time to execute. */

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original Order:\n");
    for (size_t i = 0; i < 6 ; ++i){
        printf("%-4d", arr[i]);
    }
    quicksort(arr, 0, n-1);
    printf("\nAscending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%-4d ", arr[i]);
    }
    return 0;
}
