#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;             // Start index
    int high = size - 1;     // End index

    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index

        // Check if the target is at the middle
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

// Function to print the result
void printResult(int index, int target) {
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
}

// Main function
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10; // Element to search for

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform binary search
    int result = binarySearch(arr, n, target);

    // Print the result
    printResult(result, target);

    return 0;
}
