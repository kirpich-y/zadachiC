#include <stdio.h>

int main() {
    double a, b;
    char op;
    
    while (1) {
        printf("Введите выражение: ");
        if (scanf("%lf %c %lf", &a, &op, &b) != 3) break;
        
        switch (op) {
            case '+': printf("= %.2f\n", a + b); break;
            case '-': printf("= %.2f\n", a - b); break;
            case '*': printf("= %.2f\n", a * b); break;
            case '/': 
                if (b != 0) printf("= %.2f\n", a / b);
                else printf("Деление на ноль\n");
                break;
            default: printf("Неизвестный оператор\n");
        }
        while (getchar() != '\n');
    }
    return 0;
}