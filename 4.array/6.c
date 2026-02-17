#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Не удалось открыть файл\n");
        return 1;
    }
    
    int num;
    printf("Содержимое файла: ");
    while (fscanf(file, "%d", &num) == 1) {
        printf("%d ", num);
    }
    printf("\n");
    fclose(file);
    return 0;
}