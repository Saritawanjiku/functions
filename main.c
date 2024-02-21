
#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate factorial
int fact(int i) {
    int j, k;
    j = 1;
    for (k = 2; k <= i; k++) {
        j = j * k;
    }
    return j;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call bubbleSort function to sort the array
    bubbleSort(arr, n);

    printf("Array after sorting: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
