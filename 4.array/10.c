#include <stdio.h>

int main() {
    int a, b;
    printf("Введите a и b: ");
    scanf("%d %d", &a, &b);
    
    if (b == 0) {
        printf("Ошибка: деление на ноль\n");
        return 1;
    }
    
    printf("Результат: %.2f\n", (double)a / b);
    return 0;
}