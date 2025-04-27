#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int mtx[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mtx[i]);
    }

    int max = -1;  // Start with -1 for the last element

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        int temp = mtx[i]; // Store current element
        mtx[i] = max;      // Replace current element with the max on right
        if (temp > max) {
            max = temp;    // Update max if needed
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mtx[i]);
    }

    printf("\n");

    return 0;
}
