#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);
    
    int arr[n];
    srand(time(NULL));
    
    printf("Массив случайных чисел: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}