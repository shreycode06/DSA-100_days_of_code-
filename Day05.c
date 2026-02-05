#include <stdio.h>

int main() {
    int p, q;
    int a[100], b[100];
    int i = 0, j = 0;

    // Input size of first log
    scanf("%d", &p);
    for (i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second log
    scanf("%d", &q);
    for (j = 0; j < q; j++) {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    // Merge both sorted logs
    while (i < p && j < q) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Remaining elements of first array
    while (i < p) {
        printf("%d ", a[i]);
        i++;
    }

    // Remaining elements of second array
    while (j < q) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}

