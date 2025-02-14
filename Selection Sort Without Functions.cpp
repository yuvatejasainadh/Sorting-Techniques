 #include <stdio.h>
 
 
 int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    
    int i, j, min_idx, temp;
    for (i = 0; i < n; i++){
	
        printf("%d ", arr[i]);}
    printf("\n");
 
    
    for (i = 0; i < n -1; i++) {
        min_idx = i;
 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
 
    printf("Sorted array: \n");
    for (i = 0; i < n; i++){
	
        printf("%d ", arr[i]);}
    printf("\n");

    return 0;
 }
