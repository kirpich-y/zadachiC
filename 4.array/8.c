#include <stdio.h>

int main() {
    float arr1[] = {1.5, 2.3, 4.1, 3.7, 0.9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    float sum = 0;
    for (int i = 0; i < n1; i++) sum += arr1[i];
    printf("Сумма вещественного массива: %.2f\n", sum);
    
    int arr2[3][4] = {
        {5, 2, 8, 1},
        {9, 4, 3, 7},
        {6, 0, 2, 4}
    };
    int min = arr2[0][0], max = arr2[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr2[i][j] < min) min = arr2[i][j];
            if (arr2[i][j] > max) max = arr2[i][j];
        }
    }
    printf("Минимум двумерного массива: %d\n", min);
    printf("Максимум двумерного массива: %d\n", max);
    
    return 0;
}