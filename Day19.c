#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Simple Bubble Sort
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int left = 0;
    int right = n - 1;

    int min_sum = arr[0] + arr[n-1];
    int min_left = left;
    int min_right = right;

    while(left < right) {
        int sum = arr[left] + arr[right];

        // manual absolute value comparison
        if((sum < 0 ? -sum : sum) < (min_sum < 0 ? -min_sum : min_sum)) {
            min_sum = sum;
            min_left = left;
            min_right = right;
        }

        if(sum < 0)
            left++;
        else
            right--;
    }

    printf("%d %d\n", arr[min_left], arr[min_right]);

    return 0;
}