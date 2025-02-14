#include <stdio.h>

int get_max(int A[], int n) {
    int max = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

void print_array(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void radix_sort(int A[], int n) {
    int m = get_max(A, n);
    int e = 1; // Initialize to 1 for the least significant digit
    int buckets[10][n];
    int count[10];

    while (m / e > 0) { // Loop until all digits are processed
        // Initialize count array to 0
        for (int i = 0; i < 10; i++) {
            count[i] = 0;
        }

        // Place elements into buckets based on the current digit
        for (int i = 0; i < n; i++) {
            int pos = (A[i] / e) % 10;
            buckets[pos][count[pos]] = A[i];
            count[pos]++;
        }

        // Collect elements back from buckets into the array
        int c = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < count[i]; j++) {
                A[c] = buckets[i][j];
                c++;
            }
        }

        // Move to the next digit
        e *= 10;
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Before Sorting: ");
    print_array(A, n);

    radix_sort(A, n);

    printf("After Sorting: ");
    print_array(A, n);

    return 0;
}

