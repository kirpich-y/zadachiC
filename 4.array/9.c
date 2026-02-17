#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Введите строку: ");
    fgets(str, 1000, stdin);
    str[strcspn(str, "\n")] = '\0';
    
    printf("Обратка: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}