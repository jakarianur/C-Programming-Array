#include <stdio.h>

int main() {
    int i, j, r, c, divisor;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];
    int remainder[r][c];

    printf("Enter the elements of the array: \n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            remainder[i][j] = arr[i][j] % divisor;
        }
    }
    printf("Remainders of the elements when divided by %d:\n", divisor);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", remainder[i][j]);
        }
        printf("\n");
    }
    return 0;
}
