/*Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array*/

#include <stdio.h>

int main() {
    int n, k;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    // Handle k > n
    k = k % n;

    printf("Rotated array: ");

    // Print last k elements first
    for(int i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Then print remaining elements
    for(int i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
