#include <stdio.h>

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int temp = A[i];
        while (j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }
}

int main() {
    int A[] = {43, 31, 26, 29, 12};
    int n = sizeof(A) / sizeof(A[0]);

    insertionSort(A, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

