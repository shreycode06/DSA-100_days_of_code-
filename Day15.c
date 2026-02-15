/*Problem: Given a matrix, calculate the sum of its primary diagonal elements.
The primary diagonal consists of elements where row index equals column index.*/

#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    printf("Enter the matrix elements:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if(m != n) {
        printf("Primary diagonal sum not possible (Matrix is not square)\n");
        return 0;
    }

    for(int i = 0; i < m; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of primary diagonal elements = %d\n", sum);

    return 0;
}
